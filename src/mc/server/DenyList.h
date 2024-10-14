#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class DenyList {
public:
    // DenyList inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // DenyList inner types define
    enum class Duration {};

    struct Entry {
    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
        Entry();

    public:
        // NOLINTBEGIN
        MCAPI Entry(struct DenyList::Entry const&);

        MCAPI Entry(class mce::UUID const& uuid, std::string const& xuid);

        MCAPI ~Entry();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DenyList& operator=(DenyList const&);
    DenyList(DenyList const&);
    DenyList();

public:
    // NOLINTBEGIN
    MCAPI void addEntry(struct DenyList::Entry const& entry);

    MCAPI ::DenyList::Duration getDuration(struct DenyList::Entry const& entry) const;

    MCAPI std::string const& getMessage(struct DenyList::Entry const& entry) const;

    MCAPI bool isBlocked(struct DenyList::Entry const& entry) const;

    MCAPI void removeEntry(struct DenyList::Entry const& entry);

    MCAPI ~DenyList();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool
    isBlocked(struct DenyList::Entry const&, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<struct DenyList::Entry>>>&)
        const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
