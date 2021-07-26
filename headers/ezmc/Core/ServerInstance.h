#pragma once

#include <functional>

#include "../dll.h"

class ServerInstance {
public:
    MCAPI void queueForServerThread(std::function<void()>);
};