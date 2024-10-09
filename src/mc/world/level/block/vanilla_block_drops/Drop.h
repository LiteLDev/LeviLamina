#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockState;
class HashedString;
class Randomize;
struct ResourceDrops;
struct ResourceDropsContext;
// clang-format on

namespace VanillaBlockDrops::Drop {
// NOLINTBEGIN
MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      customWhenSilkTouch(std::function<
                          struct
                          ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      customWhenSilkTouchOrToolOtherwise(
          class HashedString const& toolItemId,
          std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
              dropStrategy,
          std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
              otherDropStrategy
      );

MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
    customWhenSilkTouchOtherwise(std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>, std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);

MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      customWhenTool(
          class HashedString const& toolItemId,
          std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
              dropStrategy
      );

MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      customWhenToolOtherwise(
          class HashedString const& toolItemId,
          std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
              dropStrategy,
          std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
              otherDropStrategy
      );

MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      item(
          class HashedString const&                                                                    itemId,
          std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)> countProvider
      );

MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      nothing();

MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      self(std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)> countProvider);

MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      self(
          std::vector<class BlockState const*>                                                         statesToKeep,
          std::function<int(class Block const&, class Randomize&, struct ResourceDropsContext const&)> countProvider
      );

MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      selfWhenSilkTouchOrTool(class HashedString const& toolItemId, std::vector<class BlockState const*> statesToKeep);

MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      selfWhenSilkTouchOrToolOtherwise(
          class HashedString const& toolItemId,
          std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
              otherDropStrategy
      );

MCAPI std::function<struct ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>
      selfWhenSilkTouchOtherwise(std::function<
                                 struct
                                 ResourceDrops(class Block const&, class Randomize&, struct ResourceDropsContext const&)>);
// NOLINTEND

}; // namespace VanillaBlockDrops::Drop
