#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/HandleRangeResult.h"
#include "mc/client/gui/screens/models/SkinPackCollector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class SkinPackModel;
struct IEntitlementManager;
struct SkinRepositoryClientInterface;
// clang-format on

class SelectedPackCollector : public ::SkinPackCollector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID> mSelectedPackId;
    ::ll::TypedStorage<1, 1, bool>         mCheckComplete;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SelectedPackCollector() /*override*/ = default;

    virtual bool exhausted() const /*override*/;

    virtual ::HandleRangeResult handleRange(int, int) /*override*/;

    virtual void collect(
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entMgr,
        ::SkinRepositoryClientInterface&                     skinRepo,
        ::std::vector<::std::shared_ptr<::SkinPackModel>>&   skinPacks,
        ::std::unordered_set<::mce::UUID>&                   handledPackSet
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $exhausted() const;

    MCFOLD ::HandleRangeResult $handleRange(int, int);

    MCAPI void $collect(
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entMgr,
        ::SkinRepositoryClientInterface&                     skinRepo,
        ::std::vector<::std::shared_ptr<::SkinPackModel>>&   skinPacks,
        ::std::unordered_set<::mce::UUID>&                   handledPackSet
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
