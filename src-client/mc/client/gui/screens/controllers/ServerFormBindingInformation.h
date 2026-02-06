#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/DynamicContentBindingInformation.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class ServerFormBindingInformation : public ::DynamicContentBindingInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, ::std::function<void(::Core::Path const&)>)>>
                                   mRequestCallback;
    ::ll::TypedStorage<1, 1, bool> mInCreation;
    ::ll::TypedStorage<1, 1, bool> mIsValid;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void createBindingData(::Json::Value const& contentData) /*override*/;

    virtual ~ServerFormBindingInformation() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string _parseRawText(::Json::Value const& value) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $createBindingData(::Json::Value const& contentData);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
