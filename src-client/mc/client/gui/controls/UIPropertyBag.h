#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/PropertyBag.h"

// auto generated forward declare list
// clang-format off
struct UIControl;
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

    using PropertyChangedNotificationCallback = ::std::function<void(
        ::std::weak_ptr<::UIControl> const&,
        ::std::string_view,
        ::Json::Value const&,
        ::UIPropertyBag::ContextObject
    )>;

    struct PropertyChangedNotificationInfo {};

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
    // vIndex: 0
    virtual ~UIPropertyBag();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UIPropertyBag();

    MCNAPI void _handlePropertyChangedNotifications(
        ::std::string_view             sourcePropertyName,
        ::Json::Value const&           newValue,
        ::UIPropertyBag::ContextObject context
    );

    MCNAPI void clearWeakRegistrations();

    MCNAPI ::std::unique_ptr<::UIPropertyBag> clone() const;

    MCNAPI void registerForPropertyChangedNotification(
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

    MCNAPI void set(::std::string_view key, ::mce::Color color);

    MCNAPI void set(::std::string_view key, ::glm::ivec2 gridSize);

    MCNAPI void set(::std::string_view key, ::glm::vec2 uv);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
