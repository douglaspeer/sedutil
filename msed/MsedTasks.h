/* C:B**************************************************************************
This software is Copyright 2014 Michael Romeo <r0m30@r0m30.com>

This file is part of msed.

msed is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

msed is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with msed.  If not, see <http://www.gnu.org/licenses/>.

* C:E********************************************************************** */
#include <vector>
class MsedSession;
class MsedResponse;

int takeOwnership(char * devref, char * newpassword);
int activateLockingSP(char * devref, char * password);
int revertTPer(char * devref, char * password, uint8_t PSID=0);
int revertLockingSP(char * devref, char * password,uint8_t keep=0);
int diskScan();
int diskQuery(char * devref);
int setNewPassword(char * password, char * userid, char * newpassword, char * devref);
int enableUser(char * password, char * userid, char * devref);
int dumpTable();
int getAuth4User(char * userid, uint8_t column, std::vector<uint8_t> &userData, MsedSession * session);
int getTable(MsedSession * session, std::vector<uint8_t> table,
	uint16_t startcol, uint16_t endcol, MsedResponse & response);
int nextTable(MsedSession * session, std::vector<uint8_t> table,
	std::vector<uint8_t> startkey, MsedResponse & response);