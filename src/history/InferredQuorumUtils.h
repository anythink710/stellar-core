#pragma once

// Copyright 2018 Stellar Development Foundation and contributors. Licensed
// under the Apache License, Version 2.0. See the COPYING file at the root
// of this distribution or at http://www.apache.org/licenses/LICENSE-2.0

#include <string>

namespace stellar
{

class Config;

void checkQuorumIntersection(Config const& cfg);
void inferQuorumAndWrite(Config const& cfg);
void writeQuorumGraph(Config const& cfg, std::string const& outputFile);
}
