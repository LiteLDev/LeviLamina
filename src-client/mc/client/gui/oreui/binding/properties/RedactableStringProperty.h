#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/safety/RedactableString.h"

// auto generated forward declare list
// clang-format off
class ProfanityContext;
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class RedactableStringProperty {
public:
    // RedactableStringProperty inner types define
    using ParentPtr = ::OreUI::Detail::IPropertyObject*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                 mProperty;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString>               mRedactableString;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>> mProfanityContext;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mProfanityToggleSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RedactableStringProperty();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RedactableStringProperty(
        ::std::string                                     name,
        ::OreUI::Detail::IPropertyObject* const           parent,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> profanityContext,
        ::Bedrock::Safety::RedactableString               redactableString
    );

    MCAPI void set(::Bedrock::Safety::RedactableString const& redactableString);

    MCAPI ~RedactableStringProperty();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string                                     name,
        ::OreUI::Detail::IPropertyObject* const           parent,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> profanityContext,
        ::Bedrock::Safety::RedactableString               redactableString
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
