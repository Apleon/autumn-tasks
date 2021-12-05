
#ifndef if_h
#define if_h
//task111
int if_the_num_is_positive_add_1_to_num(int integer){
    if (integer > 0){
        integer++;
    }
    return integer;
}
//task112
int if_the_num_is_positive_add_1_to_num_else_subtract_2(int integer){
    if (integer > 0){
        integer++;
    }
    else{
        integer = integer - 2;
    }
    return integer;
}
//task113
int if_num_is_positive_add_1_to_num_else_subtract_2_if_num_equal_0_change_on_10(int integer){
    if (integer > 0){
        integer++;
    }
    if(integer < 0){
        integer = integer - 2;
    }
    if(integer == 0){
        integer = integer + 10;
    }
    else{
        throw "you pass wrong values";
    }
    return integer;
}
////task114
//int find_number_of_positive_numbers(int integer_a, int integer_b, int integer_c){
//    if (integer_a > 0 &&
//        integer_b < 0 &&
//        integer_c < 0)
//        return integer_a;
//    if (integer_a < 0 &&
//        integer_b > 0 &&
//        integer_c < 0)
//        return integer_b;
//    if (integer_a < 0 &&
//        integer_b < 0 &&
//        integer_c > 0)
//        return integer_c;
//    if (integer_a > 0 &&
//        integer_b > 0 &&
//        integer_c > 0)
//        return integer_a, integer_b, integer_c;
//    return 0;
//}














#endif /* if_h */
