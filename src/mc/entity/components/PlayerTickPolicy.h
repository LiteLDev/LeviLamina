#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerTickPolicy {
/**
 * @symbol
 * ?createPolicy\@PlayerTickPolicy\@\@YA?AV?$unique_ptr\@UIPlayerTickPolicy\@\@U?$default_delete\@UIPlayerTickPolicy\@\@\@std\@\@\@std\@\@AEBUPlayerTickConfig\@\@\@Z
 */
MCAPI std::unique_ptr<struct IPlayerTickPolicy> createPolicy(struct PlayerTickConfig const&); // NOLINT

}; // namespace PlayerTickPolicy
