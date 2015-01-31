Havoc Freeroam SA-MP Server
===========================

Build 1 (1st Feb 2015)
----------------------
- Stores system has been rewritten. Stores now load and save from database.
- Bans now include serverside information; Can be viewed at http://havocserver.com/bans
- Account IDs rather than playernames are now being used for internal data handlers.
- Players can now have an offical mapper status (/mappers).
- Namechanges are now attached to an account id rather than a name to prevent confusion.
- More accurate unixtime conversion for dates.
- New toy slot arrangement:
	Slot 1-4 Usable by everyone, Slot 5-6 VIP only.
- Enterprise/House slots now rise within score:
	Needed score:      House slots:    Enterprises slots:
			 500           1                 1
			1000           2                 2
			3000           3                 3
		   10000           4                 4
		   25000           5                 5
- House system has been fully rewritten.
   * Every house has fix amount of pv slots which can be used to buy custom cars.
   * /h now shows all of your houses, select to teleports.
   * /upgrade to upgrade your house interior.
   * /password to lock a house and set a password dialog.
   * /sellto <playerid> <price> to sell your house to another player. (Does not alter interior)
   * /sell will reset the interior.
   * /spawn to set the spawn location in your house.
   * Added '/accept house' to accept house offers.
   * Removed house item system.
   * /hlock has been merged into /lock.
   * /hmenu has been removed.
   * Using /sell resets the interior to it's default.
- Enterprise (Business) changes:
   * Businesses have been renamed to Enterprises.
   * Added type: Bitcoin Mining Farm.
   * /e for a list of your enterprises.
   * Enterpries now have a value like houses.
   * /sellto <playerid> <price> to sell your enterprise to another player. (Does not alter level)
   * Using /sell resets the enterprise level to 0.
   * Added '/accept enterprise' to to accept an enterprise offer.
- Merged old /accept command into '/accept vip'
- Dialog cleanups to avoid unnecessary overhead.
- Removed bullet hit sound from deathmatches.
- Renamed /toggletp to /tgo.
- Renamed /specoff to /unspec.
- Renamed /gsetrank to /grank.
- Removed /locate. Now redirects to /id.
- /sell /buy can now be used for houses and enterprises.
- Flip key has been set to key 'Y'.
- Removed Gold Credits system.
- Chat layout: "[Gang Tag] PlayerName (id) chat message text".
- New chat shortcuts:
  #text = Admin chat
  *text = VIP chat
  !text = Gang chat
  $$$text = Enable color codes (VIP)
- Added color codes for VIPs: <blue> <red> <green> <yellow> <white>
- Removed /scorefall, /cashfall and announce commands.
- Command /ncrecords is now accessible by everyone.
- Removed dynamic ramps.
- You can now sell/buy houses/enterprises/custom cars on the Havoc Forums.
- Removed godmode textdraw
- Houses now determine how many private cars you may held within your account.
- Player bounties are now being saved within your account.
- Duel wins and defeats are now being saved within your account.
- /caps command has been removed.
- Derby changes:
	* All players drive the same car on a map.
	* Added admin command to set the next derby map manually. (/derbyforcemap) (TODO)
- New /settings dialog values which are being saved in the database:
  * /tgo (Allow teleports to you)
  * /tpm (Allow private messages)
  * /fs (Fight style, now in a dialog)
  * /speedo (Vehicle speedometer)
  * Prefered name color
  * Prefered skin
  * Auto Login
  * /blevel (severity of vehicle boost)
  * /jlevel (severity of vehicle jumps)
  * Join message (VIP only)
  * Spawn location (House/Hotspot) 
	
Script changes made possible by SA-MP 0.3.7
- Sold house icon color has been changed to red.
	
TODO
----
- http://gamerxserver.com/downloads/GamerX-Commands.txt
- gbase http://puu.sh/dMLsJ/308a8ff150.jpg
- Remove paydays?
- Jetpack Deathmatch
- Beim connecten ein whitescreen? http://puu.sh/dLaIH/e79bbcea3e.jpg
- Remove makes total registered players 10000
- Add random messages like * Online players: 
- Add /gstats
- Add custom teleports saved in database
- Add commands: http://puu.sh/dJb5c/46aa9b26f6.jpg
- Add toggle commands like /tgo http://puu.sh/dJbax/ab6bc3faf3.jpg
- http://puu.sh/dJb8H/9089f52700.jpg
- Add mute message in GameTexts http://puu.sh/dJbc2/a0e5912058.jpg
- GZones http://puu.sh/dJbe0/70d6368c92.jpg http://puu.sh/dMLo3/0a537ea4e3.jpg
- Stats: http://puu.sh/dJbfL/513da7751c.jpg http://puu.sh/dMLlJ/02980c505f.jpg
- After register: http://puu.sh/dJbgC/00b62979eb.jpg
- More stats: http://puu.sh/dJbjf/956204b1f2.jpg
- http://puu.sh/dJbjT/2610536230.jpg
- Sone info mit gametext http://puu.sh/dJbkW/46ca58a7c8.jpg
- Fixed money format bug ($-,1000) http://puu.sh/dJboY/95e82ee65a.jpg
- You are muted http://puu.sh/dMLpa/738142a012.jpg
- http://puu.sh/dMLr2/92537b0237.jpg
- http://puu.sh/dMLs5/657a188d38.jpg

- VIP restrict /count to range
- Nach jedem house/auto/gang/entprise/register kauf sollte ein dialog kommen wit cmds die man nun nutzen kann.
- Internal safetly handlers for score and money ranges.
- Improved spawn points to be more safe for players.
- Time bans are now being deleted automatically upon expiration.
- Now using salted whirlpool for password hashing.
- Improved playing time counter for more accurate timings.
- New, better UI.
- All races have been overhauled.
- Races are now being saved in the datatbase.
- Derby has been rewritten, new maps can now be added easily.
- All file operations have been removed, everything is now in the Havoc database.
- Added admin command to reset houses/enterprises which are being owned by banned players.
- CnR has been rewritten:
- Top gangs are now being reset automatically all 7 days.
- Spawnpoints have been remapped.
- All teleports have been retaken for a better gameplay experience.
- Airport maps have been improved to make it possible to lift off with a plane.
- Gang score has been reduced if you attack a zone with many members.
- Got rid of mSelection, now using an improved UI for toys.
- Improve OnPlayerKeyStateChange and remove shitty doingStunt stuff