#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/PropertyBag.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class UIPropertyBag : public PropertyBag {
public:
    // UIPropertyBag inner types declare
    // clang-format off
    struct ContextObject;
    struct PropertyChangedNotificationInfo;
    // clang-format on

    // UIPropertyBag inner types define
    struct ContextObject {
    public:
        // prevent constructor by default
        ContextObject& operator=(ContextObject const&);
        ContextObject(ContextObject const&);
        ContextObject();
    };

    struct PropertyChangedNotificationInfo {
    public:
        // prevent constructor by default
        PropertyChangedNotificationInfo& operator=(PropertyChangedNotificationInfo const&);
        PropertyChangedNotificationInfo(PropertyChangedNotificationInfo const&);
        PropertyChangedNotificationInfo();

    public:
        // NOLINTBEGIN
        MCAPI ~PropertyChangedNotificationInfo();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    UIPropertyBag& operator=(UIPropertyBag const&);
    UIPropertyBag(UIPropertyBag const&);
    UIPropertyBag();

public:
    // NOLINTBEGIN

    // NOLINTEND
};
