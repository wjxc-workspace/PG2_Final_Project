#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "Game.h"
#include <vector>
#include "facilities/Facility.h"
#include "Monster.h"

class Player
{
public:
	static Player* getPlayer(){
		static Player p;
		return &p;
	};
	void load();
	void update();
	void write();
	/*
	* @brief responsible of the Game::state change
	*/
	void setrequest(int s){ req=s;}
	int getRequest(){return req;}
	void setAcessID(int id){ accessID=id;}
	int getAcessID(){ return accessID;}
	std::vector<Facility>& getFacilities(){ return land_settings;}
	std::vector<Monster>& getMonsters(){ return monster_owned;}
	bool loadFacilties();
	bool saveFacilities();
	bool loadMonsters();
	bool saveMonsters();


private:
	int req;
	int berries;
	int coin;
	int level;
	std::vector<Facility> land_settings;
	std::vector<Monster> monster_owned;
	const int MAX_LAND = 8;
	int accessID;

	
};

#endif
