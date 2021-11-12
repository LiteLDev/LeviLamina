/*
 *  Chocobo1/Hash
 *
 *   Copyright 2017-2020 by Mike Tzou (Chocobo1)
 *     https://github.com/Chocobo1/Hash
 *
 *   Licensed under GNU General Public License 3 or later.
 *
 *  @license GPL3 <https://www.gnu.org/licenses/gpl-3.0-standalone.html>
 */

#ifndef CHOCOBO1_RIPEMD_256_H
#define CHOCOBO1_RIPEMD_256_H

#include <array>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdint>
#include <initializer_list>
#include <string>
#include <type_traits>
#include <utility>
#include <vector>

#if (__cplusplus > 201703L)
#include <version>
#endif

#ifndef USE_STD_SPAN_CHOCOBO1_HASH
#if (__cpp_lib_span >= 202002L)
#define USE_STD_SPAN_CHOCOBO1_HASH 1
#else
#define USE_STD_SPAN_CHOCOBO1_HASH 0
#endif
#endif

#if (USE_STD_SPAN_CHOCOBO1_HASH == 1)
#include <span>
#else
#include "gsl/span"
#endif


namespace Chocobo1
{
	// Use these!!
	// RIPEMD_256();
}


namespace Chocobo1
{
// users should ignore things in this namespace

namespace Hash
{
#ifndef CONSTEXPR_CPP17_CHOCOBO1_HASH
#if __cplusplus >= 201703L
#define CONSTEXPR_CPP17_CHOCOBO1_HASH constexpr
#else
#define CONSTEXPR_CPP17_CHOCOBO1_HASH
#endif
#endif

#if (USE_STD_SPAN_CHOCOBO1_HASH == 1)
	using IndexType = std::size_t;
#else
	using IndexType = gsl::index;
#endif

#ifndef CHOCOBO1_HASH_BUFFER_IMPL
#define CHOCOBO1_HASH_BUFFER_IMPL
	template <typename T, IndexType N>
	class Buffer
	{
		public:
			using value_type = T;
			using index_type = IndexType;
			using size_type = std::size_t;

			constexpr Buffer() = default;
			constexpr Buffer(const Buffer &) = default;

			CONSTEXPR_CPP17_CHOCOBO1_HASH Buffer(const std::initializer_list<T> initList)
			{
#if !defined(NDEBUG)
				// check if out-of-bounds
				static_cast<void>(m_array.at(m_dataEndIdx + initList.size() - 1));
#endif

				for (const auto &i : initList)
				{
					m_array[m_dataEndIdx] = i;
					++m_dataEndIdx;
				}
			}

			template <typename InputIt>
			constexpr Buffer(const InputIt first, const InputIt last)
			{
				for (InputIt iter = first; iter != last; ++iter)
				{
					this->fill(*iter);
				}
			}

			constexpr T& operator[](const index_type pos)
			{
				return m_array[pos];
			}

			constexpr T operator[](const index_type pos) const
			{
				return m_array[pos];
			}

			CONSTEXPR_CPP17_CHOCOBO1_HASH void fill(const T &value, const index_type count = 1)
			{
#if !defined(NDEBUG)
				// check if out-of-bounds
				static_cast<void>(m_array.at(m_dataEndIdx + count - 1));
#endif

				for (index_type i = 0; i < count; ++i)
				{
					m_array[m_dataEndIdx] = value;
					++m_dataEndIdx;
				}
			}

			template <typename InputIt>
			constexpr void push_back(const InputIt first, const InputIt last)
			{
				for (InputIt iter = first; iter != last; ++iter)
				{
					this->fill(*iter);
				}
			}

			constexpr void clear()
			{
				m_array = {};
				m_dataEndIdx = 0;
			}

			constexpr bool empty() const
			{
				return (m_dataEndIdx == 0);
			}

			constexpr size_type size() const
			{
				return m_dataEndIdx;
			}

			constexpr const T* data() const
			{
				return m_array.data();
			}

		private:
			std::array<T, N> m_array {};
			index_type m_dataEndIdx = 0;
	};
#endif


namespace RIPEMD_256_NS
{
	class RIPEMD_256
	{
		// https://homes.esat.kuleuven.be/~bosselae/ripemd160.html

		public:
			using Byte = uint8_t;
			using ResultArrayType = std::array<Byte, 32>;

#if (USE_STD_SPAN_CHOCOBO1_HASH == 1)
			template <typename T, std::size_t Extent = std::dynamic_extent>
			using Span = std::span<T, Extent>;
#else
			template <typename T, std::size_t Extent = gsl::dynamic_extent>
			using Span = gsl::span<T, Extent>;
#endif


			constexpr RIPEMD_256();

			constexpr void reset();
			CONSTEXPR_CPP17_CHOCOBO1_HASH RIPEMD_256& finalize();  // after this, only `toArray()`, `toString()`, `toVector()`, `reset()` are available

			std::string toString() const;
			std::vector<Byte> toVector() const;
			CONSTEXPR_CPP17_CHOCOBO1_HASH ResultArrayType toArray() const;

			CONSTEXPR_CPP17_CHOCOBO1_HASH RIPEMD_256& addData(const Span<const Byte> inData);
			CONSTEXPR_CPP17_CHOCOBO1_HASH RIPEMD_256& addData(const void *ptr, const std::size_t length);
			template <std::size_t N>
			CONSTEXPR_CPP17_CHOCOBO1_HASH RIPEMD_256& addData(const Byte (&array)[N]);
			template <typename T, std::size_t N>
			RIPEMD_256& addData(const T (&array)[N]);
			template <typename T>
			RIPEMD_256& addData(const Span<T> inSpan);

		private:
			CONSTEXPR_CPP17_CHOCOBO1_HASH void addDataImpl(const Span<const Byte> data);

			static constexpr int BLOCK_SIZE = 64;

			Buffer<Byte, (BLOCK_SIZE * 2)> m_buffer;  // x2 for paddings
			uint64_t m_sizeCounter = 0;

			uint32_t m_h[8] = {};
	};


	// helpers
	template <typename T>
	class Loader
	{
		// this class workaround loading data from unaligned memory boundaries
		// also eliminate endianness issues
		public:
			explicit constexpr Loader(const uint8_t *ptr)
				: m_ptr(ptr)
			{
			}

			constexpr T operator[](const IndexType idx) const
			{
				static_assert(std::is_same<T, uint32_t>::value, "");
				// handle specific endianness here
				const uint8_t *ptr = m_ptr + (sizeof(T) * idx);
				return  ( (static_cast<T>(*(ptr + 0)) <<  0)
						| (static_cast<T>(*(ptr + 1)) <<  8)
						| (static_cast<T>(*(ptr + 2)) << 16)
						| (static_cast<T>(*(ptr + 3)) << 24));
			}

		private:
			const uint8_t *m_ptr;
	};

	template <typename R, typename T>
	constexpr R ror(const T x, const unsigned int s)
	{
		static_assert(std::is_unsigned<R>::value, "");
		static_assert(std::is_unsigned<T>::value, "");
		return static_cast<R>(x >> s);
	}

	template <typename T>
	constexpr T rotl(const T x, const unsigned int s)
	{
		static_assert(std::is_unsigned<T>::value, "");
		if (s == 0)
			return x;
		return ((x << s) | (x >> ((sizeof(T) * 8) - s)));
	}


	//
	constexpr RIPEMD_256::RIPEMD_256()
	{
		static_assert((CHAR_BIT == 8), "Sorry, we don't support exotic CPUs");
		reset();
	}

	constexpr void RIPEMD_256::reset()
	{
		m_buffer.clear();
		m_sizeCounter = 0;

		m_h[0] = 0x67452301;
		m_h[1] = 0xEFCDAB89;
		m_h[2] = 0x98BADCFE;
		m_h[3] = 0x10325476;
		m_h[4] = 0x76543210;
		m_h[5] = 0xFEDCBA98;
		m_h[6] = 0x89ABCDEF;
		m_h[7] = 0x01234567;
	}

	CONSTEXPR_CPP17_CHOCOBO1_HASH RIPEMD_256& RIPEMD_256::finalize()
	{
		m_sizeCounter += m_buffer.size();

		// append 1 bit
		m_buffer.fill(1 << 7);

		// append paddings
		const auto len = static_cast<int>(((2 * BLOCK_SIZE) - (m_buffer.size() + 8)) % BLOCK_SIZE);
		m_buffer.fill(0, (len + 8));

		// append size in bits
		const uint64_t sizeCounterBits = m_sizeCounter * 8;
		const uint32_t sizeCounterBitsL = ror<uint32_t>(sizeCounterBits, 0);
		const uint32_t sizeCounterBitsH = ror<uint32_t>(sizeCounterBits, 32);
		for (int i = 0; i < 4; ++i)
		{
			m_buffer[m_buffer.size() - 8 + i] = ror<Byte>(sizeCounterBitsL, (8 * i));
			m_buffer[m_buffer.size() - 4 + i] = ror<Byte>(sizeCounterBitsH, (8 * i));
		}

		addDataImpl({m_buffer.data(), m_buffer.size()});
		m_buffer.clear();

		return (*this);
	}

	std::string RIPEMD_256::toString() const
	{
		const auto a = toArray();
		std::string ret;
		ret.resize(2 * a.size());

		auto retPtr = &ret.front();
		for (const auto c : a)
		{
			const Byte upper = ror<Byte>(c, 4);
			*(retPtr++) = static_cast<char>((upper < 10) ? (upper + '0') : (upper - 10 + 'a'));

			const Byte lower = c & 0xf;
			*(retPtr++) = static_cast<char>((lower < 10) ? (lower + '0') : (lower - 10 + 'a'));
		}

		return ret;
	}

	std::vector<RIPEMD_256::Byte> RIPEMD_256::toVector() const
	{
		const auto a = toArray();
		return {a.begin(), a.end()};
	}

	CONSTEXPR_CPP17_CHOCOBO1_HASH RIPEMD_256::ResultArrayType RIPEMD_256::toArray() const
	{
		const Span<const uint32_t> state(m_h);
		const int dataSize = sizeof(decltype(state)::value_type);

		ResultArrayType ret {};
		auto retPtr = ret.data();
		for (const auto i : state)
		{
			for (int j = 0; j < dataSize; ++j)
				*(retPtr++) = ror<Byte>(i, (j * 8));
		}

		return ret;
	}

	CONSTEXPR_CPP17_CHOCOBO1_HASH RIPEMD_256& RIPEMD_256::addData(const Span<const Byte> inData)
	{
		Span<const Byte> data = inData;

		if (!m_buffer.empty())
		{
			const size_t len = std::min<size_t>((BLOCK_SIZE - m_buffer.size()), data.size());  // try fill to BLOCK_SIZE bytes
			m_buffer.push_back(data.begin(), (data.begin() + len));

			if (m_buffer.size() < BLOCK_SIZE)  // still doesn't fill the buffer
				return (*this);

			addDataImpl({m_buffer.data(), m_buffer.size()});
			m_buffer.clear();

			data = data.subspan(len);
		}

		const size_t dataSize = data.size();
		if (dataSize < BLOCK_SIZE)
		{
			m_buffer = {data.begin(), data.end()};
			return (*this);
		}

		const size_t len = dataSize - (dataSize % BLOCK_SIZE);  // align on BLOCK_SIZE bytes
		addDataImpl(data.first(len));

		if (len < dataSize)  // didn't consume all data
			m_buffer = {(data.begin() + len), data.end()};

		return (*this);
	}

	CONSTEXPR_CPP17_CHOCOBO1_HASH RIPEMD_256& RIPEMD_256::addData(const void *ptr, const std::size_t length)
	{
		// Span::size_type = std::size_t
		return addData({static_cast<const Byte*>(ptr), length});
	}

	template <std::size_t N>
	CONSTEXPR_CPP17_CHOCOBO1_HASH RIPEMD_256& RIPEMD_256::addData(const Byte (&array)[N])
	{
		return addData({array, N});
	}

	template <typename T, std::size_t N>
	RIPEMD_256& RIPEMD_256::addData(const T (&array)[N])
	{
		return addData({reinterpret_cast<const Byte*>(array), (sizeof(T) * N)});
	}

	template <typename T>
	RIPEMD_256& RIPEMD_256::addData(const Span<T> inSpan)
	{
		return addData({reinterpret_cast<const Byte*>(inSpan.data()), inSpan.size_bytes()});
	}

	CONSTEXPR_CPP17_CHOCOBO1_HASH void RIPEMD_256::addDataImpl(const Span<const Byte> data)
	{
		assert((data.size() % BLOCK_SIZE) == 0);

		m_sizeCounter += data.size();

		for (size_t i = 0, iend = static_cast<size_t>(data.size() / BLOCK_SIZE); i < iend; ++i)
		{
			const Loader<uint32_t> x(static_cast<const Byte *>(data.data() + (i * BLOCK_SIZE)));

			const auto f1 = [](const uint32_t x, const uint32_t y, const uint32_t z) -> uint32_t
			{
				return (x ^ y ^ z);
			};
			const auto f2 = [](const uint32_t x, const uint32_t y, const uint32_t z) -> uint32_t
			{
				return ((x & (y ^ z)) ^ z);  // alternative
			};
			const auto f3 = [](const uint32_t x, const uint32_t y, const uint32_t z) -> uint32_t
			{
				return ((x | (~y)) ^ z);
			};
			const auto f4 = [](const uint32_t x, const uint32_t y, const uint32_t z) -> uint32_t
			{
				return (((x ^ y) & z) ^ y);  // alternative
			};

			uint32_t a = m_h[0];
			uint32_t b = m_h[1];
			uint32_t c = m_h[2];
			uint32_t d = m_h[3];
			const auto lineLeft = [x](uint32_t &a, uint32_t &b, uint32_t &c, uint32_t &d, const auto &f, const uint32_t k, const unsigned int r, const unsigned int s) -> void
			{
				a = rotl((a + f(b, c, d) + x[r] + k), s);
			};

			uint32_t aa = m_h[4];
			uint32_t bb = m_h[5];
			uint32_t cc = m_h[6];
			uint32_t dd = m_h[7];
			const auto &lineRight = lineLeft;

			const auto swap = [](auto &left, auto &right)
			{
				// TODO: std::swap is finally constexpr at c++20
				const auto temp = left;
				left = right;
				right = temp;
			};

			lineLeft(a, b, c, d, f1, 0x00000000, 0, 11);
			lineLeft(d, a, b, c, f1, 0x00000000, 1, 14);
			lineRight(aa, bb, cc, dd, f4, 0x50A28BE6, 5, 8);
			lineRight(dd, aa, bb, cc, f4, 0x50A28BE6, 14, 9);
			lineLeft(c, d, a, b, f1, 0x00000000, 2, 15);
			lineLeft(b, c, d, a, f1, 0x00000000, 3, 12);
			lineRight(cc, dd, aa, bb, f4, 0x50A28BE6, 7, 9);
			lineRight(bb, cc, dd, aa, f4, 0x50A28BE6, 0, 11);
			lineLeft(a, b, c, d, f1, 0x00000000, 4, 5);
			lineLeft(d, a, b, c, f1, 0x00000000, 5, 8);
			lineRight(aa, bb, cc, dd, f4, 0x50A28BE6, 9, 13);
			lineRight(dd, aa, bb, cc, f4, 0x50A28BE6, 2, 15);
			lineLeft(c, d, a, b, f1, 0x00000000, 6, 7);
			lineLeft(b, c, d, a, f1, 0x00000000, 7, 9);
			lineRight(cc, dd, aa, bb, f4, 0x50A28BE6, 11, 15);
			lineRight(bb, cc, dd, aa, f4, 0x50A28BE6, 4, 5);
			lineLeft(a, b, c, d, f1, 0x00000000, 8, 11);
			lineLeft(d, a, b, c, f1, 0x00000000, 9, 13);
			lineRight(aa, bb, cc, dd, f4, 0x50A28BE6, 13, 7);
			lineRight(dd, aa, bb, cc, f4, 0x50A28BE6, 6, 7);
			lineLeft(c, d, a, b, f1, 0x00000000, 10, 14);
			lineLeft(b, c, d, a, f1, 0x00000000, 11, 15);
			lineRight(cc, dd, aa, bb, f4, 0x50A28BE6, 15, 8);
			lineRight(bb, cc, dd, aa, f4, 0x50A28BE6, 8, 11);
			lineLeft(a, b, c, d, f1, 0x00000000, 12, 6);
			lineLeft(d, a, b, c, f1, 0x00000000, 13, 7);
			lineRight(aa, bb, cc, dd, f4, 0x50A28BE6, 1, 14);
			lineRight(dd, aa, bb, cc, f4, 0x50A28BE6, 10, 14);
			lineLeft(c, d, a, b, f1, 0x00000000, 14, 9);
			lineLeft(b, c, d, a, f1, 0x00000000, 15, 8);
			lineRight(cc, dd, aa, bb, f4, 0x50A28BE6, 3, 12);
			lineRight(bb, cc, dd, aa, f4, 0x50A28BE6, 12, 6);
			swap(a, aa);

			lineLeft(a, b, c, d, f2, 0x5A827999, 7, 7);
			lineLeft(d, a, b, c, f2, 0x5A827999, 4, 6);
			lineRight(aa, bb, cc, dd, f3, 0x5C4DD124, 6, 9);
			lineRight(dd, aa, bb, cc, f3, 0x5C4DD124, 11, 13);
			lineLeft(c, d, a, b, f2, 0x5A827999, 13, 8);
			lineLeft(b, c, d, a, f2, 0x5A827999, 1, 13);
			lineRight(cc, dd, aa, bb, f3, 0x5C4DD124, 3, 15);
			lineRight(bb, cc, dd, aa, f3, 0x5C4DD124, 7, 7);
			lineLeft(a, b, c, d, f2, 0x5A827999, 10, 11);
			lineLeft(d, a, b, c, f2, 0x5A827999, 6, 9);
			lineRight(aa, bb, cc, dd, f3, 0x5C4DD124, 0, 12);
			lineRight(dd, aa, bb, cc, f3, 0x5C4DD124, 13, 8);
			lineLeft(c, d, a, b, f2, 0x5A827999, 15, 7);
			lineLeft(b, c, d, a, f2, 0x5A827999, 3, 15);
			lineRight(cc, dd, aa, bb, f3, 0x5C4DD124, 5, 9);
			lineRight(bb, cc, dd, aa, f3, 0x5C4DD124, 10, 11);
			lineLeft(a, b, c, d, f2, 0x5A827999, 12, 7);
			lineLeft(d, a, b, c, f2, 0x5A827999, 0, 12);
			lineRight(aa, bb, cc, dd, f3, 0x5C4DD124, 14, 7);
			lineRight(dd, aa, bb, cc, f3, 0x5C4DD124, 15, 7);
			lineLeft(c, d, a, b, f2, 0x5A827999, 9, 15);
			lineLeft(b, c, d, a, f2, 0x5A827999, 5, 9);
			lineRight(cc, dd, aa, bb, f3, 0x5C4DD124, 8, 12);
			lineRight(bb, cc, dd, aa, f3, 0x5C4DD124, 12, 7);
			lineLeft(a, b, c, d, f2, 0x5A827999, 2, 11);
			lineLeft(d, a, b, c, f2, 0x5A827999, 14, 7);
			lineRight(aa, bb, cc, dd, f3, 0x5C4DD124, 4, 6);
			lineRight(dd, aa, bb, cc, f3, 0x5C4DD124, 9, 15);
			lineLeft(c, d, a, b, f2, 0x5A827999, 11, 13);
			lineLeft(b, c, d, a, f2, 0x5A827999, 8, 12);
			lineRight(cc, dd, aa, bb, f3, 0x5C4DD124, 1, 13);
			lineRight(bb, cc, dd, aa, f3, 0x5C4DD124, 2, 11);
			swap(b, bb);

			lineLeft(a, b, c, d, f3, 0x6ED9EBA1, 3, 11);
			lineLeft(d, a, b, c, f3, 0x6ED9EBA1, 10, 13);
			lineRight(aa, bb, cc, dd, f2, 0x6D703EF3, 15, 9);
			lineRight(dd, aa, bb, cc, f2, 0x6D703EF3, 5, 7);
			lineLeft(c, d, a, b, f3, 0x6ED9EBA1, 14, 6);
			lineLeft(b, c, d, a, f3, 0x6ED9EBA1, 4, 7);
			lineRight(cc, dd, aa, bb, f2, 0x6D703EF3, 1, 15);
			lineRight(bb, cc, dd, aa, f2, 0x6D703EF3, 3, 11);
			lineLeft(a, b, c, d, f3, 0x6ED9EBA1, 9, 14);
			lineLeft(d, a, b, c, f3, 0x6ED9EBA1, 15, 9);
			lineRight(aa, bb, cc, dd, f2, 0x6D703EF3, 7, 8);
			lineRight(dd, aa, bb, cc, f2, 0x6D703EF3, 14, 6);
			lineLeft(c, d, a, b, f3, 0x6ED9EBA1, 8, 13);
			lineLeft(b, c, d, a, f3, 0x6ED9EBA1, 1, 15);
			lineRight(cc, dd, aa, bb, f2, 0x6D703EF3, 6, 6);
			lineRight(bb, cc, dd, aa, f2, 0x6D703EF3, 9, 14);
			lineLeft(a, b, c, d, f3, 0x6ED9EBA1, 2, 14);
			lineLeft(d, a, b, c, f3, 0x6ED9EBA1, 7, 8);
			lineRight(aa, bb, cc, dd, f2, 0x6D703EF3, 11, 12);
			lineRight(dd, aa, bb, cc, f2, 0x6D703EF3, 8, 13);
			lineLeft(c, d, a, b, f3, 0x6ED9EBA1, 0, 13);
			lineLeft(b, c, d, a, f3, 0x6ED9EBA1, 6, 6);
			lineRight(cc, dd, aa, bb, f2, 0x6D703EF3, 12, 5);
			lineRight(bb, cc, dd, aa, f2, 0x6D703EF3, 2, 14);
			lineLeft(a, b, c, d, f3, 0x6ED9EBA1, 13, 5);
			lineLeft(d, a, b, c, f3, 0x6ED9EBA1, 11, 12);
			lineRight(aa, bb, cc, dd, f2, 0x6D703EF3, 10, 13);
			lineRight(dd, aa, bb, cc, f2, 0x6D703EF3, 0, 13);
			lineLeft(c, d, a, b, f3, 0x6ED9EBA1, 5, 7);
			lineLeft(b, c, d, a, f3, 0x6ED9EBA1, 12, 5);
			lineRight(cc, dd, aa, bb, f2, 0x6D703EF3, 4, 7);
			lineRight(bb, cc, dd, aa, f2, 0x6D703EF3, 13, 5);
			swap(c, cc);

			lineLeft(a, b, c, d, f4, 0x8F1BBCDC, 1, 11);
			lineLeft(d, a, b, c, f4, 0x8F1BBCDC, 9, 12);
			lineRight(aa, bb, cc, dd, f1, 0x00000000, 8, 15);
			lineRight(dd, aa, bb, cc, f1, 0x00000000, 6, 5);
			lineLeft(c, d, a, b, f4, 0x8F1BBCDC, 11, 14);
			lineLeft(b, c, d, a, f4, 0x8F1BBCDC, 10, 15);
			lineRight(cc, dd, aa, bb, f1, 0x00000000, 4, 8);
			lineRight(bb, cc, dd, aa, f1, 0x00000000, 1, 11);
			lineLeft(a, b, c, d, f4, 0x8F1BBCDC, 0, 14);
			lineLeft(d, a, b, c, f4, 0x8F1BBCDC, 8, 15);
			lineRight(aa, bb, cc, dd, f1, 0x00000000, 3, 14);
			lineRight(dd, aa, bb, cc, f1, 0x00000000, 11, 14);
			lineLeft(c, d, a, b, f4, 0x8F1BBCDC, 12, 9);
			lineLeft(b, c, d, a, f4, 0x8F1BBCDC, 4, 8);
			lineRight(cc, dd, aa, bb, f1, 0x00000000, 15, 6);
			lineRight(bb, cc, dd, aa, f1, 0x00000000, 0, 14);
			lineLeft(a, b, c, d, f4, 0x8F1BBCDC, 13, 9);
			lineLeft(d, a, b, c, f4, 0x8F1BBCDC, 3, 14);
			lineRight(aa, bb, cc, dd, f1, 0x00000000, 5, 6);
			lineRight(dd, aa, bb, cc, f1, 0x00000000, 12, 9);
			lineLeft(c, d, a, b, f4, 0x8F1BBCDC, 7, 5);
			lineLeft(b, c, d, a, f4, 0x8F1BBCDC, 15, 6);
			lineRight(cc, dd, aa, bb, f1, 0x00000000, 2, 12);
			lineRight(bb, cc, dd, aa, f1, 0x00000000, 13, 9);
			lineLeft(a, b, c, d, f4, 0x8F1BBCDC, 14, 8);
			lineLeft(d, a, b, c, f4, 0x8F1BBCDC, 5, 6);
			lineRight(aa, bb, cc, dd, f1, 0x00000000, 9, 12);
			lineRight(dd, aa, bb, cc, f1, 0x00000000, 7, 5);
			lineLeft(c, d, a, b, f4, 0x8F1BBCDC, 6, 5);
			lineLeft(b, c, d, a, f4, 0x8F1BBCDC, 2, 12);
			lineRight(cc, dd, aa, bb, f1, 0x00000000, 10, 15);
			lineRight(bb, cc, dd, aa, f1, 0x00000000, 14, 8);
			swap(d, dd);

			m_h[0] += a;
			m_h[1] += b;
			m_h[2] += c;
			m_h[3] += d;
			m_h[4] += aa;
			m_h[5] += bb;
			m_h[6] += cc;
			m_h[7] += dd;
		}
	}
}
}
	using RIPEMD_256 = Hash::RIPEMD_256_NS::RIPEMD_256;
}

#endif  // CHOCOBO1_RIPEMD_256_H
