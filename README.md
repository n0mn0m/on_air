# About
The On Air project is a display that lets others know when you are working with somebody else before they enter the lab area.

This repo contains the code and documentation for a project that includes a VAD (voice activity detection) and Tensorflow Lite model to automatically update an API when the trigger word "On" is followed by "Air".

Additionally the VAD will update the API if a given amount of time goes bywith continous voice activity that does not contain the trigger keyword.

## Logic Flow
!["On Air logic flow"](imgs/on-air-grid.jpg"On Air logic flow")


## Getting Started

Each service/device is a sub directory that contains the code specific to an environment/hardware as seen in the lanes of the flow above.
