#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/HandleRangeResult.h"
#include "mc/client/gui/screens/models/SkinPackCollector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IPremiumCachePackEntitlementValidator;
class SkinPackModel;
struct IEntitlementManager;
struct SkinRepository;
struct SkinRepositoryClientInterface;
namespace mce { class UUID; }
// clang-format on

class PremiumCachePackCollector : public ::SkinPackCollector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SkinRepository&> mSkinRepo;
    ::ll::TypedStorage<4, 4, int>               mPremiumCachePacks;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPremiumCachePackEntitlementValidator>>
        mPremiumCachePackEntitlementValidator;
    // NOLINTEND

public:
    // prevent constructor by default
    PremiumCachePackCollector& operator=(PremiumCachePackCollector const&);
    PremiumCachePackCollector(PremiumCachePackCollector const&);
    PremiumCachePackCollector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PremiumCachePackCollector() /*override*/ = default;

    virtual bool exhausted() const /*override*/;

    virtual ::HandleRangeResult handleRange(int, int end) /*override*/;

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

    MCFOLD ::HandleRangeResult $handleRange(int, int end);

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
