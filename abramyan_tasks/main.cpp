#include <iostream>
#include "begin.hpp"
#include "integer.h"
#include "boolean.h"
#include "if.h"
#include <cmath>
#include "math.h"

int main(){
    setlocale(LC_ALL, "ru");

    std::cout << "task1##################" << std::endl;
    std::cout << perimeter_square_count(1) << std::endl;
    std::cout << "task2##################" << std::endl;
    std::cout << square_of_square_cout(2) << std::endl;
    std::cout << "task3##################" << std::endl;
    perimeter_and_square_of_rectangle(5, 6);
    std::cout << "task4##################" << std::endl;
    std::cout << length(5) << std::endl;
    std::cout << "task5##################" << std::endl;
    cube_volume_and_surface_area(3);
    std::cout << "task6##################" << std::endl;
    vol_of_rect_parall_and_surf_area(3, 5, 6);
    std::cout << "task7##################" << std::endl;
    length_and_square_of_circle(3);
    std::cout << "task8##################" << std::endl;
    std::cout << average(3, 4) << std::endl;
    std::cout << "task9##################" << std::endl;
    std::cout << geometric_mean(3, 4) << std::endl;
    std::cout << "task10##################" << std::endl;
    sum_diff_prod_quot_of_nonzero_numbers(6, 2);
    std::cout << "task11##################" << std::endl;
    sum_diif_prod_quot_of_modules_nonzero_numbers(5, 2);
    std::cout << "task12##################" << std::endl;
    hypotenuse_and_perimeter_of_right_triangle(2, 3, 4);
    std::cout << "task13##################" << std::endl;
    square_of_circles(3, 2);
    std::cout << "task14##################" << std::endl;
    radius_and_square_of_circle_bounded_by_circle(32);
    std::cout << "task15##################" << std::endl;
    diameter_and_length_of_circ_limited_by_circle(4);
    std::cout << "task16##################" << std::endl;
    std::cout << distance_between_points(6, 2) << std::endl;
    std::cout << "task17##################" << std::endl;
    std::cout << sum_segments_ac_and_bc(2, 3, 4) << std::endl;
    std::cout << "task18##################" << std::endl;
    std::cout << product_of_segments_ac_and_bc(3, 4, 5) << std::endl;
    std::cout << "task19##################" << std::endl;
    perimetr_and_square_of_rectangle(4, 5, 6, 7);
    std::cout << "task20##################" << std::endl;
    std::cout << point_length(5, 6, 7, 8) << std::endl;
    std::cout << "task21##################" << std::endl;
    perimeter_and_square_of_triangle(4, 5, 2, 3, 5, 3, 4, 3, 2);
    std::cout << "task22##################" << std::endl;
    change_content_in_veriables_1(4, 6);
    std::cout << "task23##################" << std::endl;
    change_content_in_veriables_2(2, 4, 5);
    std::cout << "task24##################" << std::endl;
    change_content_in_veriables_3(5, 6, 7);
    std::cout << "task25##################" << std::endl;
    std::cout << function_value_1(2) << std::endl;
    std::cout << "task26##################" << std::endl;
    std::cout << function_value_2(2) << std::endl;
    std::cout << "task27##################" << std::endl;
    all_found_powers_of_number_a_1(2);
    std::cout << "task28##################" << std::endl;
    all_found_powers_of_number_a_2(2);
    std::cout << "task29##################" << std::endl;
    std::cout << determine_value_of_angle_in_radians_1(90) << std::endl;
    std::cout << "task30##################" << std::endl;
    std::cout << determine_value_of_angle_in_radians_2(3.14) << std::endl;
    std::cout << "task31##################" << std::endl;
    std::cout << convert_farenheit_into_celsius(65) << std::endl;
    std::cout << "task32##################" << std::endl;
    std::cout << convert_celsius_into_farenheit(5) << std::endl;
    std::cout << "task33##################" << std::endl;
    price_candies_for_kilogram_and_y_kilogram(4, 6, 8);
    std::cout << "task34##################" << std::endl;
    price_chocolate_and_toffes_candies_price_difference(2, 6, 4, 2);
    std::cout << "task35##################" << std::endl;
    std::cout << path_covered_by_boat(20, 7, 30, 45) << std::endl;
    std::cout << "task36##################" << std::endl;
    std::cout << distance_between_cars(40, 60, 40, 2) << std::endl;
    std::cout << "task37##################" << std::endl;
    std::cout << distance_between_cars_2(60, 40, 60, 2) << std::endl;
    std::cout << "task38##################" << std::endl;
    std::cout << equation(2, 4) << std::endl;
    std::cout << "task39##################" << std::endl;
    roots_of_quadratic_equation(1, -8, 15);
    std::cout <<"task40##################" << std::endl;
    system_of_linear_equations(2, 3, 4, 5, 6, 7);
    std::cout <<"task41##################" << std::endl;
    std::cout << number_of_full_meters(60) << std::endl;
    std::cout <<"task42##################" << std::endl;
    std::cout << number_of_full_tons(100) << std::endl;
    std::cout <<"task43##################" << std::endl;
    std::cout << number_of_full_kbit(1600) << std::endl;
    std::cout <<"task44##################" << std::endl;
    std::cout << number_of_segments_b_placed_on_segment_a(6, 3) << std::endl;
    std::cout <<"task45##################" << std::endl;
    std::cout << length_of_unoccupied_part_of_segment_a(7, 3) << std::endl;
    std::cout <<"task46##################" << std::endl;
    dozens_and_units_of_number(12);
    std::cout <<"task47##################" << std::endl;
    sum_and_miltiplication_of_twodigit_number(13);
    std::cout <<"task48##################" << std::endl;
    std::cout << twodigit_number_obtained_by_rearranging_digits(12) << std::endl;
    std::cout <<"task49##################" << std::endl;
    std::cout << first_digit_out_of_hundreds(120) << std::endl;
    std::cout <<"task50##################" << std::endl;
    units_dozens_of_number_three_digit_number(153);
    std::cout <<"task51##################" << std::endl;
    sum_and_multiplication_of_numbers_three_digit_number(188);
    std::cout <<"task52##################" << std::endl;
    std::cout << three_digit_number_from_right_to_left(228) << std::endl;
    std::cout <<"task53##################" << std::endl;
    std::cout << crossed_out_first_digit_on_left_and_attributed_to_right(687) << std::endl;
    std::cout <<"task54##################" << std::endl;
    std::cout << crossed_out_first_digit_on_right_and_attributed_to_right(783) << std::endl;
    std::cout <<"task55##################" << std::endl;
    std::cout << num_obtained_by_permuting_digits_of_hundr_and_tens_of_orig_num(123) << std::endl;
    std::cout <<"task56##################" << std::endl;
    std::cout << num_obtained_by_permuting_digits_of_tens_and_units_of_orig_num(123) << std::endl;
    std::cout <<"task57##################" << std::endl;
    std::cout << number_corresponding_category_of_hundreds(2334) << std::endl;
    std::cout <<"task58##################" << std::endl;
    std::cout << number_corresponding_category_of_thousands(3445) << std::endl;
    std::cout <<"task59##################" << std::endl;
    std::cout << number_of_full_minutes_have_passed_since_beginning_of_day(1200) << std::endl;
    std::cout <<"task60##################" << std::endl;
    std::cout << number_of_full_hours_have_passed_since_beginning_of_day(12000) << std::endl;
    std::cout <<"task61##################" << std::endl;
    std::cout << number_of_seconds_have_passed_since_beginning_of_last_minute(453) << std::endl;
    std::cout <<"task62##################" << std::endl;
    std::cout << number_of_seconds_have_passed_since_beginning_of_last_hour(120) << std::endl;
    std::cout <<"task63##################" << std::endl;
    std::cout << number_of_full_minutes_have_passed_since_beginning_of_last_hour(123) << std::endl;
    std::cout <<"task64##################" << std::endl;
    std::cout << determine_number_of_day_of_week(13) << std::endl;
    std::cout <<"task65##################" << std::endl;
    std::cout << determine_number_of_day_of_week_starts_from_thursday(23) << std::endl;
    std::cout <<"task66##################" << std::endl;
    std::cout << determine_number_of_day_of_week_starts_from_tuesday(30) << std::endl;
    std::cout <<"task67##################" << std::endl;
    std::cout << determine_number_of_day_of_week_starts_from_saturday(219) << std::endl;
    std::cout <<"task68##################" << std::endl;
    determine_number_of_day_of_week_conclusion(264, 5);
    std::cout <<"task69##################" << std::endl;
    std::cout << number_of_squares_placed_on_rectangle(8, 6, 4) << std::endl;
    std::cout <<"task70##################" << std::endl;
    std::cout << determine_appropriate_century_number(2021) << std::endl;
    std::cout <<"task71##################" << std::endl;
    std::cout << check_positivity(543) << std::endl;
    std::cout <<"task72##################" << std::endl;
    std::cout << check_odd(5) << std::endl;
    std::cout <<"task73##################" << std::endl;
    std::cout << check_even(3) << std::endl;
    std::cout <<"task74##################" << std::endl;
    std::cout << check_truth_of_statement(3, 1) << std::endl;
    std::cout <<"task75##################" << std::endl;
    std::cout << check_truth_of_statement_2(0, -3) << std::endl;
    std::cout <<"task76##################" << std::endl;
    std::cout << double_inequality_is_true_or_not(1, 2, 4) << std::endl;
    std::cout <<"task77##################" << std::endl;
    std::cout << number_between_numbers(2, 4, 6) << std::endl;
    std::cout <<"task78##################" << std::endl;
    std::cout << all_numbers_are_odd(1, 3) << std::endl;
    std::cout <<"task79##################" << std::endl;
    std::cout << at_least_one_number_odd(5, 2) << std::endl;
    std::cout <<"task80##################" << std::endl;
    std::cout << exactly_one_number_odd(16, 1) << std::endl;
    std::cout <<"task81##################" << std::endl;
    std::cout << numbers_have_same_parity(13, 5) << std::endl;
    std::cout <<"task82##################" << std::endl;
    std::cout << numbers_are_positive(5, 1, 6) << std::endl;
    std::cout <<"task83##################" << std::endl;
    std::cout << at_least_one_number_positive(5, 1, 6) << std::endl;
    std::cout <<"task84##################" << std::endl;
    std::cout << exactly_one_of_numbers_positive(-1, -2, 6) << std::endl;
    std::cout <<"task85##################" << std::endl;
    std::cout << exactly_two_of_numbers_positive(-1, 2, 6) << std::endl;
    std::cout <<"task86##################" << std::endl;
    std::cout << number_is_even_two_digit(12) << std::endl;
    std::cout <<"task87##################" << std::endl;
    std::cout << number_is_odd_three_digit(111) << std::endl;
    std::cout <<"task88##################" << std::endl;
    std::cout << among_given_integers_at_least_one_matching_pair(2, 2, 4) << std::endl;
    std::cout <<"task89##################" << std::endl;
    std::cout << among_given_integers_at_least_one_pair_of_mutually_opposite(2, -2, 4) << std::endl;
    std::cout <<"task90##################" << std::endl;
    std::cout << all_digits_of_three_digit_number_are_different(179) << std::endl;
    std::cout <<"task91##################" << std::endl;
    std::cout << digits_of_three_digit_number_form_increasing_sequence(124) << std::endl;
    std::cout <<"task92##################" << std::endl;
    std::cout << digits_of_three_digit_number_decreasing_sequence(567) << std::endl;
    std::cout <<"task93##################" << std::endl;
    std::cout << four_digit_palindrome_number(1111) << std::endl;
    std::cout <<"task94##################" << std::endl;
    std::cout << does_quadratic_equation_have_real_roots(1, -8, 15) << std::endl;
    std::cout <<"task95##################" << std::endl;
    std::cout << does_point_lies_in_second_coordinate_quarter(-2, 2) << std::endl;
    std::cout <<"task96##################" << std::endl;
    std::cout << does_point_lies_in_fourth_coordinate_quarter(2, -2) << std::endl;
    std::cout <<"task97##################" << std::endl;
    std::cout << does_point_lies_in_second_or_third_quarter(-2, 2) << std::endl;
    std::cout <<"task98##################" << std::endl;
    std::cout << does_point_lies_in_first_or_third_quarter(-2, -2) << std::endl;
    std::cout <<"task99##################" << std::endl;
    std::cout << does_point_lies_in_rectangle_and_sides_are_parallel_coord_axes(2, 2, -3, 4, 5, -6) << std::endl;
    std::cout <<"task100##################" << std::endl;
    std::cout << does_triangle_equilateral(4, 4, 4) << std::endl;
    std::cout <<"task101##################" << std::endl;
    std::cout << does_triangle_isosceles(4, 4, 2) << std::endl;
    std::cout <<"task102##################" << std::endl;
    std::cout << does_triangle_rectangular(5, 5, 0) << std::endl;
    std::cout <<"task103##################" << std::endl;
    std::cout << does_there_triange(2, 4, 3) << std::endl;
    std::cout <<"task104##################" << std::endl;
    std::cout << does_field_white(1, 4) << std::endl;
    std::cout <<"task105##################" << std::endl;
    std::cout << fields_have_same_color(1, 4, 2, 5) << std::endl;
    std::cout <<"task106##################" << std::endl;
    std::cout << does_rook_able_to_move_from_one_field_to_another_in_one_move(2, 4, 2, 5) << std::endl;
    std::cout <<"task107##################" << std::endl;
    std::cout << does_king_able_to_move_from_one_field_to_another_in_one_move(2, 4, 1, 5) << std::endl;
    std::cout <<"task108##################" << std::endl;
    std::cout << does_elephant_able_to_move_from_one_field_to_another_in_one_move(2, 4, 1, 5) << std::endl;
    std::cout <<"task109##################" << std::endl;
    std::cout << does_queen_able_to_move_from_one_field_to_another_in_one_move(2, 4, 2, 5) << std::endl;
    std::cout <<"task110##################" << std::endl;
    std::cout << does_hourse_able_to_move_from_one_field_to_another_in_one_move(2, 3, 1, 5) << std::endl;
    std::cout <<"task111##################" << std::endl;
    std::cout << if_the_num_is_positive_add_1_to_num(1) << std::endl;
    std::cout <<"task112##################" << std::endl;
    std::cout << if_the_num_is_positive_add_1_to_num_else_subtract_2(-1) << std::endl;
    std::cout <<"task113##################" << std::endl;
    std::cout << if_num_is_positive_add_1_to_num_else_subtract_2_if_num_equal_0_change_on_10(0) << std::endl;
//    std::cout <<"task114##################" << std::endl;
//    std::cout << find_number_of_positive_numbers(1, 2, 3) << std::endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
