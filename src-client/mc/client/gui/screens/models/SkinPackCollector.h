#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/HandleRangeResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
class SkinPackModel;
class SkinRepositoryClientInterface;
namespace mce { class UUID; }
// clang-format on

class SkinPackCollector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>> mExistenceTracker;
    ::ll::TypedStorage<4, 4, int>                      mNumPacksCollected;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SkinPackCollector();

    virtual void start(bool allowed);

    virtual bool exhausted() const = 0;

    virtual ::HandleRangeResult handleRange(int, int) = 0;

    virtual void collect(
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entMgr,
        ::SkinRepositoryClientInterface&                     skinRepo,
        ::std::vector<::std::shared_ptr<::SkinPackModel>>&   skinPacks,
        ::std::unordered_set<::mce::UUID>&                   handledPackSet
    ) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SkinPackCollector();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $start(bool allowed);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
