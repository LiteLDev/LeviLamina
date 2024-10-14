#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class TransactionFrameSourceTarget {
public:
    // prevent constructor by default
    TransactionFrameSourceTarget& operator=(TransactionFrameSourceTarget const&);
    TransactionFrameSourceTarget(TransactionFrameSourceTarget const&);
    TransactionFrameSourceTarget();

public:
    // NOLINTBEGIN
    MCAPI ~TransactionFrameSourceTarget();

    MCAPI static class Core::Result exec(
        class Core::Path const&                                                      source,
        class Core::Path const&                                                      target,
        std::function<class Core::Result(class Core::TransactionFrameSourceTarget&)> sameStorageAreaFunction,
        std::function<class Core::Result(class Core::TransactionFrameSourceTarget&)> differentStorageAreaFunction
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI TransactionFrameSourceTarget(class Core::Path const& source, class Core::Path const& target);

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

}; // namespace Core
