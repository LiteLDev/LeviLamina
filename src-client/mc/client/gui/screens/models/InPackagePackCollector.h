#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/HandleRangeResult.h"
#include "mc/client/gui/screens/models/SkinPackCollector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
class PersonaClient;
class SkinPackModel;
class SkinRepository;
namespace mce { class UUID; }
// clang-format on

class InPackagePackCollector : public ::SkinPackCollector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SkinRepository&> mSkinRepo;
    ::ll::TypedStorage<4, 4, int>               mInPackagePacks;
    // NOLINTEND

public:
    // prevent constructor by default
    InPackagePackCollector& operator=(InPackagePackCollector const&);
    InPackagePackCollector(InPackagePackCollector const&);
    InPackagePackCollector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InPackagePackCollector() /*override*/ = default;

    virtual bool exhausted() const /*override*/;

    virtual ::HandleRangeResult handleRange(int end, int) /*override*/;

    virtual void collect(
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entMgr,
        ::PersonaClient&                                     skinRepo,
        ::std::vector<::std::shared_ptr<::SkinPackModel>>&   skinPacks,
        ::std::unordered_set<::mce::UUID>&                   handledPackSet
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $exhausted() const;

    MCFOLD ::HandleRangeResult $handleRange(int end, int);

    MCAPI void $collect(
        ::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entMgr,
        ::PersonaClient&                                     skinRepo,
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
