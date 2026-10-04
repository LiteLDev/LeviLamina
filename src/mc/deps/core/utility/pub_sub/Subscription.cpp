#include "mc/deps/core/utility/pub_sub/Subscription.h"

// The default constructor is implicit in the game (no exported symbol); the only member
// is a weak_ptr, so default construction is safe to provide here.
Bedrock::PubSub::Subscription::Subscription() = default;
