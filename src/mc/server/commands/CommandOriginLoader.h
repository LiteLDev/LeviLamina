#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ICommandOriginLoader.h"

class CommandOriginLoader : public ::ICommandOriginLoader {
public:
    // prevent constructor by default
    CommandOriginLoader& operator=(CommandOriginLoader const&);
    CommandOriginLoader(CommandOriginLoader const&);
    CommandOriginLoader();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandOriginLoader();

    // vIndex: 1
    virtual std::unique_ptr<class CommandOrigin> load(class CompoundTag const& tag);

    MCAPI explicit CommandOriginLoader(class ServerLevel& level);

    MCAPI static std::unique_ptr<class CommandOrigin> load(class CompoundTag const& tag, class ServerLevel& level);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI std::unique_ptr<class CommandOrigin> load$(class CompoundTag const& tag);

    // NOLINTEND
};
