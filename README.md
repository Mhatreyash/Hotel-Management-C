# Hotel Reservation System

This is a simple C-based hotel reservation system that allows users to manage bookings, search for reservations, cancel entries, and add new bookings. The program uses structures, arrays, functions, and basic control statements to simulate a basic hotel management system.

## Table of Contents

- [Features](#features)
- [Structure Definition](#structure-definition)
- [Functions](#functions)
- [Usage](#usage)
- [About](#about)

## Features

- **Display Bookings**: View all existing hotel bookings.
- **Search Entries**: Search for bookings using various criteria such as serial number, room type, room number, and client name.
- **Reservation**: Add new bookings by entering the client's details and room preferences.
- **Cancel Entries**: Delete existing bookings based on their serial number.
- **About Project**: View information about the project.

## Structure Definition

The hotel reservation system uses a structure to store booking details. The structure `hotel` is defined as follows:

```c
struct hotel {
  int r_id;         // Reservation ID
  char name[20];    // First name of the client
  char lname[20];   // Last name of the client
  char r_type[15];  // Room type (e.g., Deluxe, King, Suite)
  int r_no;         // Room number
  int n_d;          // Number of days
  long amt;         // Total amount
};
