initial_tx = 30
initial_ty = 5
light_x = 0
light_y = 17
remaining_turns = 35

while (remaining_turns>0):
      # The remaining amount of turns Thor can move. Do not remove this line.
    remaining_turns -= 1
    # Write an action using print
    # To debug: print("Debug messages...", file=sys.stderr, flush=True)

    if (initial_tx < light_x and initial_ty < light_y ):
        initial_tx += 1
        initial_ty += 1
        print("SE")
    elif (initial_tx < light_x and initial_ty > light_y ):
        initial_tx += 1
        initial_ty -= 1
        print("NE")
    elif (initial_tx > light_x and initial_ty > light_y ):
        initial_tx -= 1
        initial_ty -= 1
        print("NW")
    elif (initial_tx > light_x and initial_ty < light_y ):
        initial_tx -= 1
        initial_ty += 1
        print("SW")

    elif (initial_tx < light_x):
        print("E")
        initial_tx += 1
    elif (initial_tx > light_x):
        initial_tx -= 1
        print("W")
    elif (initial_ty < light_y):
        initial_ty += 1
        print("S")
    elif (initial_ty > light_y):
        initial_ty -= 1
        print("N")
