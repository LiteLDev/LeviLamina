/*
 *  Chocobo1/Hash
 *
 *   Copyright 2017-2018 by Mike Tzou (Chocobo1)
 *     https://github.com/Chocobo1/Hash
 *
 *   Licensed under GNU General Public License 3 or later.
 *
 *  @license GPL3 <https://www.gnu.org/licenses/gpl-3.0-standalone.html>
 */

#ifndef CHOCOBO1_HAS_V_320_H
#define CHOCOBO1_HAS_V_320_H

#include "../gsl/span"

#include <array>
#include <cstdint>
#include <initializer_list>
#include <string>
#include <vector>


class HAS_V_320
{
	// https://link.springer.com/chapter/10.1007%2F3-540-44983-3_15

	public:
		using Byte = uint8_t;
		using ResultArrayType = std::array<Byte, 40>;

		template <typename T>
		using Span = gsl::span<T>;


		HAS_V_320();

		void reset();
		HAS_V_320& finalize();  // after this, only `toArray()`, `toString()`, `toVector()`, `reset()` are available

		std::string toString() const;
		std::vector<Byte> toVector() const;
		ResultArrayType toArray() const;

		HAS_V_320& addData(const Span<const Byte> inData);
		HAS_V_320& addData(const void *ptr, const long int length);

	private:
		void addDataImpl(const Span<const Byte> data);

		const unsigned int BLOCK_SIZE = 128;

		std::vector<Byte> m_buffer;
		uint64_t m_sizeCounter;

		uint32_t m_h[10];
};

#endif  // CHOCOBO1_HAS_V_320_H
