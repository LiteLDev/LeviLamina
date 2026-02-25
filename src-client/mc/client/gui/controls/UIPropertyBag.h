#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/PropertyBag.h"

// auto generated forward declare list
// clang-format off
class UIControl;
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class UIPropertyBag : public ::PropertyBag {
public:
    // UIPropertyBag inner types declare
    // clang-format off
    struct ContextObject;
    struct PropertyChangedNotificationInfo;
    // clang-format on

    // UIPropertyBag inner types define
    struct ContextObject {};

    struct PropertyChangedNotificationInfo {};

    using PropertyChangedNotificationCallback = ::std::function<void(
        ::std::weak_ptr<::UIControl> const&,
        ::std::string_view,
        ::Json::Value const&,
        ::UIPropertyBag::ContextObject
    )>;

    using PropertyChangedNotificationInfoVector = ::std::vector<::UIPropertyBag::PropertyChangedNotificationInfo>;

    using PropertyInfoList =
        ::std::map<::std::string, ::std::vector<::UIPropertyBag::PropertyChangedNotificationInfo>, ::std::less<void>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<::std::string, ::std::vector<::UIPropertyBag::PropertyChangedNotificationInfo>, ::std::less<void>>>
        mPropertyChangedNotificationInfoMap;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIPropertyBag();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _handlePropertyChangedNotifications(
        ::std::string_view             sourcePropertyName,
        ::Json::Value const&           newValue,
        ::UIPropertyBag::ContextObject context
    );

    MCAPI void append(::UIPropertyBag const& propertyBag);

    MCAPI ::std::unique_ptr<::UIPropertyBag> clone() const;

    MCAPI void registerForPropertyChangedNotification(
        ::std::string const&         sourcePropertyName,
        ::std::string const&         targetPropertyName,
        ::std::weak_ptr<::UIControl> targetControl,
        ::std::function<void(
            ::std::weak_ptr<::UIControl> const&,
            ::std::string_view,
            ::Json::Value const&,
            ::UIPropertyBag::ContextObject
        )>                           callback
    );

    MCAPI void set(::std::string_view key, ::mce::Color color);

    MCAPI void set(::std::string_view key, ::glm::ivec2 gridSize);

    MCAPI void set(::std::string_view key, ::glm::vec2 uv);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
