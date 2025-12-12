#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/PropertyBag.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
struct UIControl;
// clang-format on

class UIPropertyBag : public ::PropertyBag {
public:
    // UIPropertyBag inner types declare
    // clang-format off
    struct ContextObject;
    struct PropertyChangedNotificationInfo;
    // clang-format on

    // UIPropertyBag inner types define
    struct ContextObject {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk71f0af;
        // NOLINTEND

    public:
        // prevent constructor by default
        ContextObject& operator=(ContextObject const&);
        ContextObject(ContextObject const&);
        ContextObject();
    };

    struct PropertyChangedNotificationInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk79b1e3;
        ::ll::UntypedStorage<8, 16> mUnkeadded;
        ::ll::UntypedStorage<8, 64> mUnkeb20fd;
        // NOLINTEND

    public:
        // prevent constructor by default
        PropertyChangedNotificationInfo& operator=(PropertyChangedNotificationInfo const&);
        PropertyChangedNotificationInfo(PropertyChangedNotificationInfo const&);
        PropertyChangedNotificationInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ~PropertyChangedNotificationInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

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
#ifdef LL_PLAT_S
    virtual ~UIPropertyBag() = default;
#else // LL_PLAT_C
    virtual ~UIPropertyBag();
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C UIPropertyBag();

    MCNAPI_C void _handlePropertyChangedNotifications(
        ::std::string_view             sourcePropertyName,
        ::Json::Value const&           newValue,
        ::UIPropertyBag::ContextObject context
    );

    MCNAPI_C void clearWeakRegistrations();

    MCNAPI_C ::std::unique_ptr<::UIPropertyBag> clone() const;

    MCNAPI_C void registerForPropertyChangedNotification(
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

    MCNAPI_C void set(::std::string_view key, ::mce::Color color);

    MCNAPI_C void set(::std::string_view key, ::glm::ivec2 gridSize);

    MCNAPI_C void set(::std::string_view key, ::glm::vec2 uv);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();
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
