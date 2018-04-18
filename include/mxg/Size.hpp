#ifndef MXG_SIZE_HPP_
#define MXG_SIZE_HPP_

#include <cstdint>

namespace mxg {

class Size {
public:
    Size() = default;
    Size(uint32_t aWidth, uint32_t aHeight);

    uint32_t width;
    uint32_t height;
};

bool operator == (const Size& left, const Size& right);
bool operator != (const Size& left, const Size& right);

} /* namespace mxg */
#endif /* MXG_SIZE_HPP_ */
