# 📋 Breaking Changes Page (Deprecated)

> Since the API has been designed to be strictly backward compatible since version 1.0.0, there are almost no more major changes that would cause API incompatibility, so there is no need to constantly maintain this page  
> If nothing else, this page will not be updated, and the rare exceptions will be explained in the release.

Here is a list of some breaking changes to the **API** made by LiteLoader ScriptEngine that may cause **backwards incompatibility**.
If your plugin has problems after updatin the version, please check the relevant content in this chapter first to check whether it is caused by API changes.  
Changes are displayed in chronological order from newest to oldest.

Note: Only API changes that cause **incompatible changes** are listed here. If you want to see all changelogs, go to the GitHub commits page to see the commits

#### Latest (Dev)

- `player.direction` changed to `player.rotation`, the return value uses Vec2 to represent the rotation angle.

#### 20210829 - v0.5.2

- The `Text` class was renamed `Format`, content unchanged, to avoid name collisions.

#### 20210827 - v0.5.1

- Removed `mc.setOnlinePlayer` interface.

#### 20210826 - v0.5.0

- `pl.removeScore` was renamed to `pl.deleteScore`, and a large number of new scoreboard APIs have been added.

#### 20210818 - v0.4.5

- Changed the loading mechanism of dependencies, now only baselib will be automatically loaded 
- `pl.runcmd` Commands executed by member methods will be prefixed with "/" 

#### 20210807 - v0.4.0

- Events added: `onSpawnProjectile`, `onBedExplode`,` onRespawnAnchorExplode`
- Events removed: `onProjectileShoot`, `onSplashPotionHitEffect`,`onFishingHookRetrieve`

#### 20210803 - v0.3.2

- `mc.listAllScoreObjective` was renamed to `mc.getAllScoreObjective`, the interface was fixed.

#### 20210802 - v0.3.1

- `lxl.version` in the version object `build` was renamed to `revision`

#### 20210801 - v0.3.0

- The event `onContainerChangeSlot` was renamed to `onContainerChange`, moved to the block event, and the callback parameters were modified. See event documentation for details.
- The event `onProjectileHit` was renamed to `onProjectileHitBlock`, the callback parameters were modified, and the entity `onProjectileHitEntity` was added
- The event `onDestroyingBlock` was changed to `onStartDestroyBlock`

#### 20210730 - v 0.3.0

- The interface return value of the modified content of the two form builders is modified to return the original object, which is convenient for chain operations.
- NBT Object Generic Interface `toJson`was renamed to `toString`. The function`toJson` is now used for other purposes.

#### 20210725 - v0.2.1 hotfix2

- Adds `onPlayerDie` event
- **Big change:** Cross-plugin function call interface `lxl.import` 

#### 20210723 - v0.0.9

- `mc.runcmdEx` now returns a value object.
- `res.result` was renamed to `res.success`

#### 20210720 - v 0.0.9

- The old event `onJoin` was renamed to `onPreJoin`, and a new event `onJoin` was created, which is more aptly named.

#### 20210719 - v 0.0.9

- `mc.newForm` was renamed to `mc.newCustomForm`.- Added `SimpleForm` normal form builder.
- The event `onUseItem` no longer has a block parameter. To monitor a clicked block, please use the `onBlockInteracted` event.
- `useItem` events no longer keep swiping.

#### 20210717 - v 0.0.8

- Adapted to 1.17.10
- The parameter content of the form function callback function has changed greatly.

#### 20210714 - v 0.0.7

- The events `onOpenChest` and `onOpenBarrel` were merged into `onOpenContainer`
- The events`onCloseChest` and `onCloseBarrel`w ere merged into `onCloseContainer`
- The event `onChangeSlot` was renamed to `onContainerChangeSlot`
- The interface `file.read` was renamed to `file.readFrom`, and the interface `file.write` was changed to `file.writeTo`
- The log output level of the general log interface has undergone major changes.
- The event `onServerCmd` was renamed to `onConsoleCmd`

#### 20210713 - v 0.0.7

- `lxl.getVerion` The return value type becomes `Object`
- The `pl.sendSimpleForm` function adds an `images` parameter

#### 20210709 - v 0.0.7

- Remove the first prefix item in the registered custom command callback parameter args (that is, the original args[0]). 
  The args array will contain only the arguments split from the registered command.
  For details, please refer to the relevant documentation of the command system API.
- The `IntPos` and `FloatPos` that are in the type `dim` variable were renamed to `dimid` for clarity.