#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ReplayStatePolicy {
// NOLINTBEGIN
/**
 * @symbol
 * ?createServerContext\@ReplayStatePolicy\@\@YA?AV?$unique_ptr\@UIReplayStatePolicy\@\@U?$default_delete\@UIReplayStatePolicy\@\@\@std\@\@\@std\@\@AEBUReplayStateConfig\@\@\@Z
 */
MCAPI std::unique_ptr<struct IReplayStatePolicy> createServerContext(struct ReplayStateConfig const&);
// NOLINTEND

}; // namespace ReplayStatePolicy
