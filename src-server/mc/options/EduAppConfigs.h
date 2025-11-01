#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/DataBackedAppConfigs.h"
#include "mc/options/EducationEditionOffer.h"

// auto generated forward declare list
// clang-format off
class IAppConfigData;
class IContentAccessibilityProvider;
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

    // vIndex: 34
    virtual ::std::unique_ptr<::IContentAccessibilityProvider> createContentAccessibility() const /*override*/;

    // vIndex: 27
    virtual bool canUseAzureNotebooks() const /*override*/;

    // vIndex: 0
    virtual ~EduAppConfigs() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PackIdVersion const& EDUOreUIResourcePack();

    MCNAPI static ::PackIdVersion const& EDUResourcePack();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
