Havoc Freeroam SA-MP Server
===========================

1.00 (1st Feb 2015)
-------------------
- Businesses have been renamed to Enterprises.
- Better unixtime conversion.
- Dialog cleanups.
- /announce commands have been removed.
- Removed bullet hit sound from deathmatches.
- Added enterprise type: Bitcoin Mining Farm.
- Renamed /bmenu to /emenu.
- Renamed /specoff to /unspec.
- Stores system has been rewritten. Stores now load and save from database.
- Bans now include serverside information; Can be viewed at https://havocserver.com/bans
- Account IDs rather than playernames are now being used for internal data handlers.
- Players can now have an offical mapper status (/mappers).
- Internal safetly handlers for score and money ranges.
- Namechanges are now attached to an account id rather than a name. This prevents confusion.

TODO
----
- Duel wins and defeats are now being saved within your account.
- Time bans are now being deleted automatically upon expiration.
- /sell /buy can now be used for houses and enterprises.
- Now using salted whirlpool for password hashing.
- Improved playing time counter for more accurate timings.
- New, better UI.
- Player bounties are now being saved in the database.
- All races have been overhauled.
- Races are now being saved in the datatbase.
- House system has been fully rewritten.
- Derby has been rewritten, new maps can now be added easily.
- All file operations have been removed, everything is now in the Havoc database.
- Added admin command to reset houses/enterprises which are being owned by banned players.
- CnR has been rewritten:
- Top gangs are now being reset automatically all 7 days.
- You can no longer vote for the same map in derby.
- Added admin command to set the next derby map manually.
- Spawnpoints have been remapped.
- All teleports have been retaken for a better gameplay experience.
- /settings is now being saved in the database.
- Many new /settings options 
- Airport maps have been improved to make it possible to lift off with a plane.
- Gang score has been reduced if you attack a zone with many members.
- Houses now determine how many private cars you may held within your account.
- You can now sell/buy houses/enterprises/pvs on the Havoc forums.
- Got rid of mSelection, now using an improved UI for toys.
- Set the maximum attached player objects to 8.