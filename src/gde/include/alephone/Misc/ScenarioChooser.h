#ifndef SCENARIO_CHOOSER_H
#define SCENARIO_CHOOSER_H

/*
	Copyright (C) 2024 by Gregory Smith and the Aleph One developers
 
	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	This license is contained in the file "COPYING",
	which is included with this source code; it is available online at
	http://www.gnu.org/licenses/gpl.html
 */

#include <string>
#include <tuple>
#include <vector>

#include <SDL2/SDL.h>

class ScenarioChooserScenario;
class font_info;

class ScenarioChooser
{
public:
	static constexpr auto title_screen_width = 640;	 // nominal
	static constexpr auto title_screen_height = 480; // nominal
	
	static constexpr auto scenario_width = 320;
	static constexpr auto scenario_height = 240;

	static constexpr auto margin = 10;
	
	ScenarioChooser();
	~ScenarioChooser();

	void add_primary_scenario(const std::string& path) { add_scenario(path, true, false); }
	void add_workshop_scenario(const std::string& path) { add_scenario(path, false, true); }
	void add_directory(const std::string& path);

	int num_scenarios() const;

	// returns path to scenario, is_workshop
	std::pair<std::string, bool> run();

private:
	bool done_;

	int window_width_;
	int window_height_;

	int rows_;
	int cols_;
	int margin_;

	int scroll_;
	int max_scroll_;

	int offsetx_;
	int offsety_;

	int selection_;

	std::vector<ScenarioChooserScenario> scenarios_;

	void add_scenario(const std::string& path, bool is_primary, bool is_workshop);
	void determine_cols_rows();
	void ensure_selection_visible();
	void handle_event(SDL_Event& e);
	void move_selection(int col_delta, int row_delta);
	void optimize_image(ScenarioChooserScenario& scenario, SDL_Window* window);
	void redraw(SDL_Window* window);
};

#endif
