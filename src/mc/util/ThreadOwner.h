#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/application/common/utility/ThreadOwnerBase.h"

namespace Bedrock::Application {

template <typename T0, int WrongThreadBehavior = 0>
class ThreadOwner : public ::Bedrock::Application::ThreadOwnerBase {
public:
    T0 mObject;
};

} // namespace Bedrock::Application
