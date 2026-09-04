#pragma once

namespace Bedrock::PubSub {
enum class ReturnPolicyType : int {
    Aggregate = 0,
    Discard   = 1,
};
}
