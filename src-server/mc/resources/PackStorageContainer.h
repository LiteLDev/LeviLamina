#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SharedLockbox.h"
#include "mc/resources/PackStorage.h"

class PackStorageContainer : public ::Bedrock::Threading::SharedLockbox<::PackStorage, ::std::shared_mutex> {};
