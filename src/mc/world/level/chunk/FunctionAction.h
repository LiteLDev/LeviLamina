#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/IRequestAction.h"

class FunctionAction : public ::IRequestAction {
public:
    // prevent constructor by default
    FunctionAction& operator=(FunctionAction const&);
    FunctionAction(FunctionAction const&);
    FunctionAction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FunctionAction() = default;

    // vIndex: 1
    virtual void execute(class ServerLevel& level, class Dimension& dimension);

    // vIndex: 2
    virtual void serialize(class CompoundTag& tag);

    // vIndex: 3
    virtual bool operator==(class IRequestAction const& action) const;

    MCAPI FunctionAction(std::string const& filePath, std::unique_ptr<class CommandOrigin> commandOrigin);

    MCAPI static std::unique_ptr<class FunctionAction>
    load(class CompoundTag const& tag, class ICommandOriginLoader& loader);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _printOriginInvalidError(class ServerLevel& level);

    MCAPI void _printOutput(class ServerLevel& level, int successCount);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& filePath, std::unique_ptr<class CommandOrigin> commandOrigin);

    MCAPI void execute$(class ServerLevel& level, class Dimension& dimension);

    MCAPI void serialize$(class CompoundTag& tag);

    // NOLINTEND
};
