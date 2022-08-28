## ✨ ParticleSpawner 对象

   对于某个 `ParticleSpawner` 类型变量 ps, 有如下这些成员:

   | 成员             | 含义           | 类型      |
   | ---------------- | ------------- | --------- |
   | ps.displayRadius | 粒子显示半径   | `Integer` |
   | ps.highDetial    | 需要高细节线条 | `Boolean` |
   | ps.doubleSide    | 需要双面粒子   | `Boolean` |

### 生成一个粒子生成器对象

`mc.newParticleSpawner(displayRadius = 4294967295, highDetial = true, doubleSide = true)`

- 返回值：一个粒子生成器对象
- 返回值类型：`ParticleSpawner`

## 粒子颜色枚举

| 粒子颜色枚举              |
| ------------------------ |
| `ParticleColor.Black`    |
| `ParticleColor.Indigo`   |
| `ParticleColor.Lavender` |
| `ParticleColor.Teal`     |
| `ParticleColor.Cocoa`    |
| `ParticleColor.Dark`     |
| `ParticleColor.Oatmeal`  |
| `ParticleColor.White`    |
| `ParticleColor.Red`      |
| `ParticleColor.Apricot`  |
| `ParticleColor.Yellow`   |
| `ParticleColor.Green`    |
| `ParticleColor.Vatblue`  |
| `ParticleColor.Slate`    |
| `ParticleColor.Pink`     |
| `ParticleColor.Fawn`     |

## 方向枚举

| 方向枚举           |
| ----------------- |
| `Direction.NEG_Y` |
| `Direction.POS_Y` |
| `Direction.NEG_Z` |
| `Direction.POS_Z` |
| `Direction.NEG_X` |
| `Direction.POS_X` |

## 生成指定名称粒子

`ps.spawnParticle(pos, name)`

- 参数：
  - pos 可以是浮点坐标或者整数坐标, 整数坐标会取方块中心点位置
  - name : `String`
- 返回值：true
- 返回值类型：`Boolean`

> 以下粒子均为 2s 显示时间

## 生成点粒子

`ps.drawPoint(pos, pointSize = 4, color = ParticleColor.White)`

- 参数：
  - pos 可以是浮点坐标或者整数坐标, 整数坐标会取方块中心点位置
  - pointSize : `Number`
    - 只有 1, 2, 4, 8, 16 大小可选
  - color : `String` 应当使用 `ParticleColor` 枚举填充
- 返回值：true
- 返回值类型：`Boolean`

## 生成数字粒子

`ps.drawNumber(pos, num, color = ParticleColor.White)`

- 参数：
  - pos 可以是浮点坐标或者整数坐标, 整数坐标会取方块中心点位置
  - num : 若为`Number`只可填 0~16, 若为`String`可填 `0`~`16` 或 `A`~`F`
  - color : `String`, 应当使用 `ParticleColor` 枚举填充
- 返回值：true
- 返回值类型：`Boolean`

## 生成轴向线段

`ps.drawAxialLine(pos, direction, length, color = ParticleColor.White)`

- 参数：
  - pos 线段起点, 可以是浮点坐标或者整数坐标, 整数坐标会取方块中心点位置
  - direction : `Number`, 应当使用 `Direction` 枚举填充
  - length : `Number`, 任意实数
  - color : `String`, 应当使用 `ParticleColor` 枚举填充
- 返回值：true
- 返回值类型：`Boolean`

## 生成有向线段

`ps.drawOrientedLine(start, end, lineWidth = 4, minSpacing = 1, maxParticlesNum = 64, color = ParticleColor.White)`

- 参数：
  - start 线段起点, 可以是浮点坐标或者整数坐标, 整数坐标会取方块中心点位置
  - end 线段终点, 可以是浮点坐标或者整数坐标, 整数坐标会取方块中心点位置
  - lineWidth : `Number`
    - 只有 1, 2, 4, 8, 16 大小可选
  - minSpacing : `Number`, 任意实数, 此线段点最小间隔
  - maxParticlesNum : `Number`, 整数, 此线段最大粒子数，达到后会自动增加间隔
  - color : `String`, 应当使用 `ParticleColor` 枚举填充
- 返回值：true
- 返回值类型：`Boolean`

## 生成圆

`ps.drawCircle(pos, facing, radius, lineWidth = 4, minSpacing = 1, maxParticlesNum = 64, color = ParticleColor.White)`

- 参数：
  - pos 圆心, 可以是浮点坐标或者整数坐标, 整数坐标会取方块中心点位置
  - facing : `Number`, 应当使用 `Direction` 枚举填充
  - radius : `Number`, 任意实数, 半径
  - lineWidth : `Number`
    - 只有 1, 2, 4, 8, 16 大小可选
  - minSpacing : `Number`, 任意实数, 此圆点最小间隔
  - maxParticlesNum : `Number`, 整数, 此圆最大粒子数，达到后会自动增加间隔
  - color : `String`, 应当使用 `ParticleColor` 枚举填充
- 返回值：true
- 返回值类型：`Boolean`

## 生成立方体

`ps.drawCuboid(pos[,pos2], color = ParticleColor.White)`

- 参数：
  - pos : 可以是浮点坐标或者整数坐标, 整数坐标会取方块角落底部位置, 若只有一个坐标，会画出 1×1×1 大小的立方体
  - pos2 : 可以是浮点坐标或者整数坐标, 整数坐标会取方块角落顶端位置, 会画出从最小角落 pos 到最大角落 pos2 的立方体
  - color : `String`, 应当使用 `ParticleColor` 枚举填充
- 返回值：true
- 返回值类型：`Boolean`
