class Product:
    def __init__(self, name, price, amount):
        self.name = name
        self.price = price
        self.amount = amount
        self.sold = 0

    def buy(self, num = 1):
        buy = input(self.name + "의 총 판매가격은 %d원 구매하겠습니까(Y/N)?"%self.price)
        if buy == "Y":
            if self.amount >= num:
                print(self.name + "제품", num, "개 총", self.price*num, "원에 판매하였습니다.")
                self.amount -= num
                self.sold += num
            else:
                print(self.name + "의 판매할 재고 수량이 없음")

    def currentState(self):
        print("제품명:", self.name, "단가:", self.price, "재고:", self.amount)
        
    def totalState(self):
        print("제품명:", self.name, "총 판매 수량:", self.sold, "총 판매 금액:", self.sold * self.price)

def rankTotalPrice(productlist):
    productlist = sorted(productlist, key = lambda x:x.sold*x.price, reverse=True)
    for i in range(len(productlist)):
        print(i+1, ":", productlist[i].name, "/", productlist[i].sold * productlist[i].price)

if __name__ == "__main__":
    product_list = [ Product("연필", 1000, 10),
                    Product("샤프", 3000, 5),
                    Product("공책", 2000, 5),
                    Product("볼펜", 2000, 5)]
    print("#1"); product_list[0].buy()
    print("#2"); product_list[0].buy()
    print("#3"); product_list[1].buy(10)
    print("#4"); product_list[2].buy(2)
    print("#5"); product_list[2].buy(1)
    print("#6"); product_list[3].buy(2)

    print("#7")
    for p in product_list:
        p.currentState()
        p.totalState()
        print()

    print("#8")
    rankTotalPrice(product_list)