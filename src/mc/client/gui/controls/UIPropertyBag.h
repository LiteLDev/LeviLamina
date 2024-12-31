#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/PropertyBag.h"

// auto generated forward declare list
// clang-format off
class UIControl;
namespace Json { class Value; }
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

    using PropertyChangedNotificationCallback = ::std::function<void(
        ::std::weak_ptr<::UIControl> const&,
        ::std::string_view,
        ::Json::Value const&,
        ::UIPropertyBag::ContextObject
    )>;

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
    };

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
    // prevent constructor by default
    UIPropertyBag& operator=(UIPropertyBag const&);
    UIPropertyBag(UIPropertyBag const&);
    UIPropertyBag();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UIPropertyBag() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
