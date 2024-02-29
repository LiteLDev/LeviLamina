#pragma once

#include "ll/api/base/StdInt.h"
#include <mutex>

namespace ll::form {
class FormIdManager {
private:
    static uint       mCurrentId;
    static std::mutex mMutex;

public:
    LLNDAPI static uint genFormId();
};
} // namespace ll::form
