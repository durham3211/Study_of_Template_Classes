//
// Created by User on 9/16/2018.
//

#ifndef SOTC_SHAPE_H
#define SOTC_SHAPE_H

<Object>
class Shape {
public:
    /**
     * @return
     * This is the template for the method to read
     */
    virtual Object read() const = 0 ;
    /**
     * @param object
     * This is the templet for the method to write
     */
    virtual Object write(const Object & object) = 0 ;

};


#endif //SOTC_SHAPE_H
