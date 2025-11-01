#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct AttributeInit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk46a751;
    ::ll::UntypedStorage<8, 16> mUnk8566e5;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeInit& operator=(AttributeInit const&);
    AttributeInit(AttributeInit const&);
    AttributeInit();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AttributeInit(char const* name, ::std::variant<::std::optional<bool> const*, ::std::optional<int> const*, ::std::optional<uint> const*, ::std::optional<int64> const*, ::std::optional<uint64> const*, ::std::optional<double> const*, ::std::optional<::std::string> const*, ::std::optional<::std::vector<bool>> const*, ::std::optional<::std::vector<int>> const*, ::std::optional<::std::vector<uint>> const*, ::std::optional<::std::vector<int64>> const*, ::std::optional<::std::vector<uint64>> const*, ::std::optional<::std::vector<double>> const*, ::std::optional<::std::vector<::std::string>> const*, ::std::optional<::std::map<::std::string, uint64>> const*, ::std::optional<::std::map<::std::string, double>> const*> const& variant);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(char const* name, ::std::variant<::std::optional<bool> const*, ::std::optional<int> const*, ::std::optional<uint> const*, ::std::optional<int64> const*, ::std::optional<uint64> const*, ::std::optional<double> const*, ::std::optional<::std::string> const*, ::std::optional<::std::vector<bool>> const*, ::std::optional<::std::vector<int>> const*, ::std::optional<::std::vector<uint>> const*, ::std::optional<::std::vector<int64>> const*, ::std::optional<::std::vector<uint64>> const*, ::std::optional<::std::vector<double>> const*, ::std::optional<::std::vector<::std::string>> const*, ::std::optional<::std::map<::std::string, uint64>> const*, ::std::optional<::std::map<::std::string, double>> const*> const& variant);
    // NOLINTEND

};

}
