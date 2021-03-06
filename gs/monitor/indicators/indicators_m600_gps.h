/*
 * Copyright 2020 Makani Technologies LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef GS_MONITOR_INDICATORS_INDICATORS_M600_GPS_H_
#define GS_MONITOR_INDICATORS_INDICATORS_M600_GPS_H_

#include <stdint.h>

#include "gs/monitor/widgets/indicator.h"

#ifdef __cplusplus
extern "C" {
#endif

void UpdateGsGpsCompassHeading(Indicator *ind, int32_t init);
void UpdateGsGpsCn0(Indicator *ind, int32_t init);
void UpdateGsGpsPos(Indicator *ind, int32_t init);
void UpdateGsGpsPosVelType(Indicator *ind, int32_t init);
void UpdateGsGpsSigmas(Indicator *ind, int32_t init);
void UpdateWingGpsACn0(Indicator *ind, int32_t init);
void UpdateWingGpsASolutionType(Indicator *ind, int32_t init);
void UpdateWingGpsASigmas(Indicator *ind, int32_t init);
void UpdateWingGpsBCn0(Indicator *ind, int32_t init);
void UpdateWingGpsBSolutionType(Indicator *ind, int32_t init);
void UpdateWingGpsBSigmas(Indicator *ind, int32_t init);

#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // GS_MONITOR_INDICATORS_INDICATORS_M600_GPS_H_
