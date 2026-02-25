#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/StoreProgressHandler.h"

class LibraryProgressHandler : public ::StoreProgressHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::string, ::std::string>>> mProperties;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryProgressHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibraryProgressHandler() /*override*/ = default;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>& container) const /*override*/;

    virtual ::std::string getName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LibraryProgressHandler(
        ::std::string                                            title,
        ::std::function<void(bool&)>                             tickCallback,
        ::std::function<void()>                                  cancelCallback,
        ::std::vector<::std::pair<::std::string, ::std::string>> properties
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string                                            title,
        ::std::function<void(bool&)>                             tickCallback,
        ::std::function<void()>                                  cancelCallback,
        ::std::vector<::std::pair<::std::string, ::std::string>> properties
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addEventProperties(::std::unordered_map<::std::string, ::std::string>& container) const;

    MCAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
