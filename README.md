# Metrology_NPL_3Ph4W
Three phase RL78/I1C -512k metering source code for PMOD. (R5F10NPL)

## Supported compilers:
- CC-RL 1.12.10

## Instructions e2studio:
- Open worksace anywhere on machine (except for local git repo).
- File --> Import --> General --> Existing Projects Into Workspace
- Navigate to this repo.
- Select project.
- Click Finish.

## Documentation
This section outlines the documentation shipped with this repo.

## Build Configurations
The different build configurations are:
**Debug_CT**
*Debug version of the project enables on-chip debug circuitry in option bytes - assumes usage of CT's for current measurement.*

**Release_CT**
*Release version of the project disables on-chip debug circuitry in option bytes - assumes usage of CT's for current measurement.*

# Notes
- For compiler v1.10.00 the following linker command must be applied: -Change_message=information=1321,1110
This is due to the bug: https://en-support.renesas.com/knowledgeBase/19936382

