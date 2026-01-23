#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
namespace Bedrock::PubSub { class Subscription; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Container; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Context; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Panel; }
// clang-format on

class IDataDrivenUIRepository : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~IDataDrivenUIRepository() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~IDataDrivenUIRepository() /*override*/;
#endif

    virtual void load(::ResourcePackManager const&) = 0;

    virtual ::std::vector<::std::variant<
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Container>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Context>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Panel>>> const&
    getComposition(::std::string const&) const = 0;

    virtual ::std::vector<::std::variant<
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Container>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Context>,
        ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Panel>>> const&
    getRoot(::std::string const&) const = 0;

    virtual ::Bedrock::PubSub::Subscription subscribeToOnCompositionsReloadedAsync(::std::function<void()>&&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
