//
// Created by User on 9/16/2018.
//

#ifndef SOTC_SQUARE_H
#define SOTC_SQUARE_H
#include "shape.h"
<Object>
class Square : public Shape<Object> {

public:
    /**
     *
     * @param init_side_* is the default initial value of each side
     */
    explicit Square(Object
                    init_side_1 = 1,
                    init_side_2 = 1,
                    init_side_3 = 1,
                    init_side_4 = 1);
    /**
     *
     * @return the sides of the Square instance
     */
    Object read() const override;

private:
    Object side_1;
    Object side_2;
    Object side_3;
    Object side_4;
};


#endif //SOTC_SQUARE_H
