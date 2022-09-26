
local balance = 500
local dollarSign = "$"
local moneyToWithdraw
local methodNumber

function showMethods()

    print("******************")
    print("1 - Show Balance")
    print("2 - Deposit Money")
    print("3 - Withdraw Money")
    print("4 - Exit")
    print("******************")

    getMethodNumber()



    return

end

function getMethodNumber()

    local methodNumber = io.read("*n")

    if (methodNumber == 1) then
        
        showBalance()

    elseif (methodNumber == 2) then

        depositMoney()

    elseif (methodNumber == 3) then

        withdrawMoney()

    elseif (methodNumber == 4) then

        exitProgram()

    else 
        
        print("That is not a valid method!")

    end

    return

end

function showBalance()

    io.write("\nYour balance is: ", dollarSign, balance, "\n")
    showMethods()

    return

end

function depositMoney()

    moneyToDeposit = io.read("*n")
    balance = balance + moneyToDeposit
    io.write("\nYour new balance is: ", dollarSign, balance, "\n")

    showMethods()

    return

end

function withdrawMoney() 

    moneyToWithdraw = io.read("*n")
    balance = balance - moneyToWithdraw
    io.write("\nYour new balance is: ", dollarSign, balance, "\n")

    showMethods()

    return

end

function exitProgram()

    os.exit()

    return

end

showMethods()
