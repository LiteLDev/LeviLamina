## ✨ ParticleSpawner Object

   For a `ParticleSpawner` type variable ps, there are the following members:

   | members          | type      |
   | ---------------- | --------- |
   | ps.displayRadius | `Integer` |
   | ps.highDetial    | `Boolean` |
   | ps.doubleSide    | `Boolean` |

### Particle Spawner Object

`mc.newParticleSpawner(displayRadius = 4294967295, highDetial = true, doubleSide = true)`

- Return value type: `ParticleSpawner`

## Particle Color Enums

| Particle Color Enums     |
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

## Direction Enums

| Direction Enums   |
| ----------------- |
| `Direction.NEG_Y` |
| `Direction.POS_Y` |
| `Direction.NEG_Z` |
| `Direction.POS_Z` |
| `Direction.NEG_X` |
| `Direction.POS_X` |

## Generate named particles

`ps.spawnParticle(pos, name)`

- parameter:
  - pos : Can be FloatPos or IntPos, IntPos will take the position of the center point of the block
  - name : `String`
- Return value: true
- Return value type: `Boolean`

> The following particles are all 2s display time

## Generate point particles

`ps.drawPoint(pos, pointSize = 4, color = ParticleColor.White)`

- parameter:
  - pos : Can be FloatPos or IntPos, IntPos will take the position of the center point of the block
  - pointSize : `Number`
    - Only 1, 2, 4, 8, 16 size optional
  - color : `String` should use `ParticleColor` to fill
- Return value: true
- Return value type: `Boolean`

## Generate digital particles

`ps.drawNumber(pos, num, color = ParticleColor.White)`

- parameter:
  - pos : Can be FloatPos or IntPos, IntPos will take the position of the center point of the block
  - num : if is `Number` , can only fill with 0~16, if is `String` , can fill with `0`~`16` or `A`~`F`
  - color : `String` should use `ParticleColor` to fill
- Return value: true
- Return value type: `Boolean`

## Generate Axial Segments

`ps.drawAxialLine(pos, direction, length, color = ParticleColor.White)`

- parameter:
  - pos : segment start point, Can be FloatPos or IntPos, IntPos will take the position of the center point of the block
  - direction : `Number`, should use `Direction` to fill
  - length : `Number`, any real number
  - color : `String` should use `ParticleColor` to fill
- Return value: true
- Return value type: `Boolean`

## Generate directed line segments

`ps.drawOrientedLine(start, end, lineWidth = 4, minSpacing = 1, maxParticlesNum = 64, color = ParticleColor.White)`

- parameter:
  - start : segment start point, Can be FloatPos or IntPos, IntPos will take the position of the center point of the block
  - end : segment end point, Can be FloatPos or IntPos, IntPos will take the position of the center point of the block
  - lineWidth : `Number`
    - Only 1, 2, 4, 8, 16 size optional
  - minSpacing : `Number`, any real number, Minimum interval between points of this line segment
  - maxParticlesNum : `Number`, Integer, the maximum number of particles in this line segment, the interval will be automatically increased after reaching
  - color : `String` should use `ParticleColor` to fill
- Return value: true
- Return value type: `Boolean`

## Generate circle

`ps.drawCircle(pos, facing, radius, lineWidth = 4, minSpacing = 1, maxParticlesNum = 64, color = ParticleColor.White)`

- parameter:
  - pos : center of circle, Can be FloatPos or IntPos, IntPos will take the position of the center point of the block
  - facing : `Number`, should use `Direction` to fill
  - radius : `Number`, any real number
  - lineWidth : `Number`
    - Only 1, 2, 4, 8, 16 size optional
  - minSpacing : `Number`, any real number, Minimum interval between points of this line segment
  - maxParticlesNum : `Number`, Integer, the maximum number of particles in this line segment, the interval will be automatically increased after reaching
  - color : `String` should use `ParticleColor` to fill
- Return value: true
- Return value type: `Boolean`

## generate cube

`ps.drawCuboid(pos[,pos2], color = ParticleColor.White)`

- parameter:
  - pos : Can be floating point coordinates or integer coordinates, the integer coordinates will take the bottom position of the corner of the block, if there is only one coordinate, it will draw a 1×1×1 cube
  - pos2 : Can be floating point coordinates or integer coordinates, the integer coordinates will take the top position of the corner of the block, and will draw a cube from the smallest corner pos to the largest corner pos2
  - color : `String` should use `ParticleColor` to fill
- Return value: true
- Return value type: `Boolean`
