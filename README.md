# GameEditor

This project is a simple game with editing function, the game sends the input data to the server and the
server simply checks the JSON file if the command exists then return the appropriate response.

Editing can be done while the game is playing and does not need any kind of maintenance or restarting which
is one of the main subject of this exercise

This is a project for Beijing Jiatong University in Game Tool Developement

- Problems

The client and the game editor have to be seperated.
The client must not be disconnected during his game if an update has been done.
The server must never be shutdown when an update has been done.

- Goals

Develop a tool to edit/ship features 7x24
Make the tool cross platform

- User Story

Game Operator add/remove/update a feature into the map, on a specific place, at a given time.
Game Coding guys add a feature into the code base, after sufficient testing, the binary is shipped to the prod, which enables the Game Operator to add the feature to the map.

- Architecture

TO DO

- Details of Components

Server language: Python
Client language: Python
Editor language: CPP + Qt
Storage: JSON

- Milestones

v0.0.1: Storage
v0.1.0: Server
v0.2.0: Game
v0.3.0: Game editor
v1.0.0: All fonctionnal game with server and game editor
