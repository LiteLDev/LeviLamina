#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackError.h"

class PackSettingsError : public ::PackError {
public:
    // prevent constructor by default
    PackSettingsError& operator=(PackSettingsError const&);
    PackSettingsError(PackSettingsError const&);
    PackSettingsError();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PackSettingsError();

    // vIndex: 1
    virtual std::string getLocErrorMessage() const;

    // vIndex: 2
    virtual std::unordered_map<int, std::string> const& getLocErrorMessageMap() const;

    // vIndex: 3
    virtual std::unordered_map<int, std::string> const& getEventErrorMessageMap() const;

    MCAPI explicit PackSettingsError(std::vector<std::string> const& errorParam);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI std::unordered_map<int, std::string> const& getEventErrorMessageMap$() const;

    MCAPI std::string getLocErrorMessage$() const;

    MCAPI std::unordered_map<int, std::string> const& getLocErrorMessageMap$() const;

    // NOLINTEND
};
