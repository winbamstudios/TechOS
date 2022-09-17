# TechOS
The TechOS Operating System (written in C)
## DISCLAMER
A major part of this OS is a jumble of source code. I don't remember all the original sources but I do remember some.

## BUILDING
### Dependencies

Git (Linux/macOS)
Docker (Windows/macOS/Linux)

### Instructions

Type `git clone https://github.com/winbamstudios/TechOS` if on Linux or UNIX-like OSes.
If on Windows, download the source code from this Github page.

Once you have the source code, type `docker build buildenv -t techos-c`

Launch on Windows: `launchdocker.bat`
Launch on Windows (PowerShell): `.\launchdocker-powershell.bat`
Pre-Launch on MacOS/Linux: `chmod +x launch-linux-macos.sh`
Launch on MacOS/Linux: `./launch-linux-macos.sh`

## CREDITS
KEYBOARD, TERMINAL: https://lucuslabs.com/my_cool_os

FUSE (unused because i am stupid and thought i could use FUSE in my OS): https://github.com/libfuse/libfuse

OS TUTORIAL: https://www.youtube.com/watch?v=FkrpUaGThTQ&list=PLZQftyCk7_SeZRitx5MjBKzTtvk0pHMtp

### CONTRIBUTIONS ARE WELCOME!
