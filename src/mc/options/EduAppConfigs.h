#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/options/DataBackedAppConfigs.h"
#include "mc/options/EducationEditionOffer.h"

// auto generated forward declare list
// clang-format off
class IAppConfigData;
class IContentAccessibilityProvider;
class IEntitlementManager;
class IMinecraftGame;
struct PackIdVersion;
// clang-format on

class EduAppConfigs : public ::DataBackedAppConfigs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5b8c8b;
    // NOLINTEND

public:
    // prevent constructor by default
    EduAppConfigs& operator=(EduAppConfigs const&);
    EduAppConfigs(EduAppConfigs const&);
    EduAppConfigs();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void loadFromData(::IAppConfigData const&) /*override*/;

    // vIndex: 16
    virtual ::EducationEditionOffer getEducationEditionOffering() const /*override*/;

    // vIndex: 31
    virtual void setCanAccessWorldCallback(::IMinecraftGame& minecraftGame) /*override*/;

    // vIndex: 34
    virtual ::std::unique_ptr<::IContentAccessibilityProvider>
    createContentAccessibility(::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager) const
        /*override*/;

    // vIndex: 27
    virtual bool canUseAzureNotebooks() const /*override*/;

    // vIndex: 0
    virtual ~EduAppConfigs() /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::PackIdVersion const& EDUResourcePack();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $loadFromData(::IAppConfigData const&);

    MCAPI ::EducationEditionOffer $getEducationEditionOffering() const;

    MCAPI void $setCanAccessWorldCallback(::IMinecraftGame& minecraftGame);

    MCAPI ::std::unique_ptr<::IContentAccessibilityProvider>
    $createContentAccessibility(::Bedrock::NotNullNonOwnerPtr<::IEntitlementManager> entitlementManager) const;

    MCAPI bool $canUseAzureNotebooks() const;
    // NOLINTEND
};
